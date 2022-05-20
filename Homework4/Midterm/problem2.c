#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int reverse(unsigned int number);

void problem2(void)
{
	unsigned int number;

	printf("�ִ� ���ڸ� ���� ������ �Է��ϼ��� (��, 1234) : ");
	(void) scanf("%u", &number);
	unsigned int reversed = 0;

	// number�� reverse �Լ� �Էº����� �Ѱ��ְ� �� ������� reversed ������ �ֵ��� �ڵ带 �ۼ��Ͻÿ�.
	reversed = reverse(number);

	printf("%u ���ڸ� �ݴ�� ����� ������ ���� ���� %u�� �˴ϴ�.\n\n", number, reversed);
	
	fseek(stdin, 0, SEEK_END); // �� �ڵ�� �������� ���ÿ�.
}

int reverse(unsigned int number)
{
	int temp = 0; // �����

	if (number / 1000 > 0) // 4�ڸ� ��
	{
		temp += (number % 10) * 1000; // ���� �ڸ� ���� >> õ�� �ڸ� ����
		number = number / 10;

		temp += (number % 10) * 100; // ���� �ڸ� ���� >> ���� �ڸ� ����
		number = number / 10;

		temp += (number % 10) * 10; // ���� �ڸ� ���� >> ���� �ڸ� ����
		number = number / 10;

		temp += number; // õ�� �ڸ� ���� >> ���� �ڸ� ����
	}
	else if (number / 100 > 0) // 3�ڸ� ��
	{
		temp += (number % 10) * 100; // ���� �ڸ� ���� >> ���� �ڸ� ����
		number = number / 10;

		temp += (number % 10) * 10; // ���� �ڸ� ���� >> ���� �ڸ� ����
		number = number / 10;

		temp += number; // ���� �ڸ� ���� >> ���� �ڸ� ����
	}
	else if (number / 10 > 0) // 2�ڸ� ��
	{
		temp += (number % 10) * 10; // ���� �ڸ� ���� >> ���� �ڸ� ����
		number = number / 10;

		temp += number; // ���� �ڸ� ���� >> ���� �ڸ� ����
	}
	else // 1�ڸ� ��
	{
		temp += number; // ���� �ڸ� ���� >> ���� �ڸ� ����
	}

	return temp;
}