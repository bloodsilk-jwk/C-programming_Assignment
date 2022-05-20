#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int verifyStudentNumber(unsigned int studentNumber);

void problem4(void)
{
	unsigned int studentNumber;

	printf("�й��� �Է��ϼ��� : ");
	(void)scanf("%x", &studentNumber);

	int correct = 0;

	// studentNumber�� verifyStudentNumber�� �Լ� �Է����� �Ѱ��ְ� �� ����� correct�� �����ϵ��� �����Ͻÿ�.
	correct = verifyStudentNumber(studentNumber);
	// correct�� 1�̸� ���������� �ԷµǾ��ٴ� �޼�����
	// correct�� 0�̸� �������� �й��� �ƴϴٴ� �޼����� ����ϵ��� �Ͻÿ�.
	if (correct == 1)
	{
		printf("�й� %x��(��) ���������� �Էµ� ���Դϴ�.\n\n", studentNumber);
	}
	else
	{
		printf("�й� %x��(��) �������� �й��� �ƴմϴ�.\n\n", studentNumber);
	}

	fseek(stdin, 0, SEEK_END); // �� �ڵ�� �������� ���ÿ�.
}

int verifyStudentNumber(unsigned int studentNumber)
{
	// A, B, C�� ���� 10������ 10, 11, 12
	int temp = studentNumber;
	int abc = 0; // ù�ڸ� ABC üũ��

	if (temp % 0x10 >= 0x00 && temp % 0x10 <= 0x09) // �ڿ��� 1��°
	{
		temp = temp / 0x10;
	}
	if (temp % 0x10 >= 0x00 && temp % 0x10 <= 0x09) // �ڿ��� 2��°
	{
		temp = temp / 0x10;
	}
	if (temp % 0x10 >= 0x00 && temp % 0x10 <= 0x09) // �ڿ��� 3��°
	{
		temp = temp / 0x10;
	}
	if (temp % 0x10 >= 0x00 && temp % 0x10 <= 0x09) // �ڿ��� 4��°
	{
		temp = temp / 0x10;
	}
	if (temp % 0x10 >= 0x00 && temp % 0x10 <= 0x09) // �ڿ��� 5��°
	{
		temp = temp / 0x10;
	}
	if (temp % 0x10 >= 0x00 && temp % 0x10 <= 0x09) // �ڿ��� 6��°
	{
		temp = temp / 0x10;
	}
	if (temp % 0x10 >= 0x0a && temp % 0x10 <= 0x0c) // �ڿ��� 7��°, ABC
	{
		abc++;
		temp = temp / 0x10;
	}
	
	if (temp == 0x00 && abc == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}