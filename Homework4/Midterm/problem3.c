#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int reverse(unsigned int number);

int numberOfDigits(unsigned int number)
{
	int count = 1;

	if (number / 10 == 0)
	{
		return count;
	}
	count = count + 1;
	number = number / 10;

	if (number / 10 == 0)
	{
		return count;
	}
	count = count + 1;
	number = number / 10;

	if (number / 10 == 0)
	{
		return count;
	}
	count = count + 1;
	number = number / 10;

	if (number / 10 == 0)
	{
		return count;
	}
	count = count + 1;
	number = number / 10;

	if (number / 10 == 0)
	{
		return count;
	}
	count = count + 1;
	number = number / 10;

	if (number / 10 == 0)
	{
		return count;
	}
	count = count + 1;
	number = number / 10;

	if (number / 10 == 0)
	{
		return count;
	}
	count = count + 1;
	number = number / 10;

	if (number / 10 == 0)
	{
		return count;
	}
	count = count + 1;
	number = number / 10;

	if (number / 10 == 0)
	{
		return count;
	}
	count = count + 1;
	return count;
}

void problem3(void)
{
	unsigned int number;

	printf("�ִ� ���ڸ� ���� ������ �Է��ϼ��� (��, 1234) : ");
	(void)scanf("%u", &number);
	unsigned int palindrome = 0;

	// number�� makePalindrome �Լ��� �Էº����� �Ѱ��ְ� ��ȯ���� palindrome ������ �����ϵ��� �ڵ带 �ۼ��Ͻÿ�.
	palindrome = makePalindrome(number);

	printf("%u ������ palindrome�� ���� ���� %u�� �����ϴ�.\n\n", number, palindrome);

	fseek(stdin, 0, SEEK_END); // �� �ڵ�� �������� ���ÿ�.
}

int makePalindrome(unsigned int number)
{
	int temp = 0;
	int digitnumber = numberOfDigits(number);

	if (digitnumber == 4)
	{
		temp += number * 10000;
	}
	else if (digitnumber == 3)
	{
		temp += number * 1000;
	}
	else if (digitnumber == 2)
	{
		temp += number * 100;
	}
	else
	{
		temp += number * 10;
	}
	temp += reverse(number);
}