#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isAlphabet(char ch)
{
	if (ch >= 'a') 
	{
		if (ch <= 'z')
		{
			return 1;
		}
		return 0;
	}
	
	if (ch >= 'A')
	{
		if (ch <= 'Z')
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int isDigit(char ch)
{
	if (ch >= '0')
	{
		if (ch <= '9')
		{
			return 1;
		}
	}
	return 0;
}

int isAlphabetOrNumeric(char ch);

void problem1(void)
{
	char ch;

	printf("���ڹ��ڸ� �Է��ϼ��� (��. 3) : ");
	(void) scanf("%c", &ch);

	int result = 0;

	// isAlphabetOrNumeric �Լ��� ch�� �Ѱ��ְ� �� ��ȯ���� result�� �����Ͻÿ�.
	result = isAlphabetOrNumeric(ch);

	// result �������� 1�̸� ch ���� ���ڹ����̰ų� ���ĺ������Դϴ� ��� ȭ�鿡 ����Ͻÿ�.	
	// digit �������� 0�̸� ch ���� ���ڹ��ڵ� ���ĺ����ڰ� �ƴմϴ� ��� ȭ�鿡 ����Ͻÿ�.
	if (result == 1)
	{
		printf("%c �� ���ڹ����̰ų� ���ĺ������Դϴ�.\n\n", ch);
	}
	else
	{
		printf("%c �� ���ڹ��ڵ� ���ĺ����ڵ� �ƴմϴ�.\n\n", ch);
	}

	fseek(stdin, 0, SEEK_END); // �� �ڵ�� �������� ���ÿ�.
}


int isAlphabetOrNumeric(char ch)
{
	if (isDigit(ch) == 1 || isAlphabet(ch) == 1)
	{
		return 1;
	}
	return 0;
}