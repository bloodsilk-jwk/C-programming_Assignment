#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int numOfBits(unsigned int positive);
void printThreeNumbersInAscendingOrder(int num1, int num2, int num3);
int isPrime(int number);
void minusTime(int earlyHour, int earlyMinute, int earlySecond, int lateHour, int lateMinute, int lateSecond);
int compareTime(int hour1, int minute1, int second1, int hour2, int minute2, int second2);

int main()
{
	// problem1
	unsigned int positive;
	printf("���� ���� �Է� : ");
	scanf("%d", &positive);
	
	int result = numOfBits(positive);
	printf("%d\n\n", result);

	// problem2
/*	int num1, num2, num3;
	printf("3���� ���� �Է� : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printThreeNumbersInAscendingOrder(num1, num2, num3);
*/
	// Test Case
	printf("Test Case\n\n"); 
	printThreeNumbersInAscendingOrder(3, 5, 10);
	printThreeNumbersInAscendingOrder(6, 22, 9);
	printThreeNumbersInAscendingOrder(4, 3, 3);
	printThreeNumbersInAscendingOrder(4, 3, 4);

	// problem3
	int num;
	printf("2 ~ 10������ ���� 1�� �Է� : ");
	scanf("%d", &num);

	if (isPrime(num) == 1)
	{
		printf("%d�� �Ҽ��Դϴ�.\n\n", num);
	}
	else
	{
		printf("%d�� �Ҽ��� �ƴմϴ�.\n\n", num);
	}

	// problem4
	int hour1, minute1, second1;
	printf("ù ��° �ð��� �Է��մϴ�. : ");
	scanf("%d %d %d", &hour1, &minute1, &second1);

	int hour2, minute2, second2;
	printf("�� ��° �ð��� �Է��մϴ�. : ");
	scanf("%d %d %d", &hour2, &minute2, &second2);

	int compared = compareTime(hour1, minute1, second1, hour2, minute2, second2);

	if (compared == 1)
	{
		minusTime(hour2, minute2, second2, hour1, minute1, second1);
	}
	else
	{
		minusTime(hour1, minute1, second1, hour2, minute2, second2);
	}

}

int numOfBits(unsigned int positive)
{
	unsigned int temp = positive;
	int bit1Number = 0;

	// int���� 4byte (= 32bit)
	for (int count = 31; count >= 0; count--)
	{
		// count��ŭ �������� ����Ʈ
		temp >>= count;
		
		// 0000 0001�� AND ����
		// �� ������ �ڸ��� 0 �ƴϸ� 1�� �����
		if ((temp & 1) == 1) 
		{
			// ���� ����� 1�̶�� bit1 ���� +1
			bit1Number++;
		}

		// temp ����
		temp = positive; 
	}

	return bit1Number;
}

void printThreeNumbersInAscendingOrder(int num1, int num2, int num3)
{
	if (num1 >= num2)
	{
		if (num1 >= num3)
		{
			if (num2 >= num3)
			{
				printf("%d %d %d\n\n", num1, num2, num3);
			}
			else // num2 < num3
			{
				printf("%d %d %d\n\n", num1, num3, num2);
			}
		}
		else // num1 < num3
		{
			printf("%d %d %d\n\n", num3, num1, num2);
		}
	}
	else // num1 < num2
	{
		if (num2 >= num3)
		{
			if (num1 >= num3)
			{
				printf("%d %d %d\n\n", num2, num1, num3);
			}
			else // num1 < num3
			{
				printf("%d %d %d\n\n", num2, num3, num1);
			}
		}
		else // num2 < num3
		{
			printf("%d %d %d\n\n", num3, num2, num1);
		}
	}
}

int isPrime(int number)
{
	// 2���� (�Է°� - 1)����
	for (int quotient = 2; quotient < number; quotient++)
	{
		// ������ �������ٸ� 0 ��ȯ
		if ((number % quotient) == 0)
		{
			return 0;
		}
	}
	// ������ �������� ���� ����
	return 1;
}

void minusTime(int earlyHour, int earlyMinute, int earlySecond, int lateHour, int lateMinute, int lateSecond)
{
	int resultHour, resultMinute, resultSecond;

	if (lateSecond < earlySecond)
	{
		lateSecond += 60;
		lateMinute -= 1;
	}
	resultSecond = lateSecond - earlySecond;

	if (lateMinute < earlyMinute)
	{
		lateMinute += 60;
		lateHour -= 1;
	}
	resultMinute = lateMinute - earlyMinute;

	resultHour= lateHour - earlyHour;

	printf("�� �ð��� �ð����� %d�ð� %d�� %d�� �Դϴ�.\n\n", resultHour, resultMinute, resultSecond);
}

int compareTime(int hour1, int minute1, int second1, int hour2, int minute2, int second2)
{
	if (hour1 > hour2)
	{
		return 1;
	}
	if (hour1 < hour2)
	{
		return 0;
	}
	// �ð��� ����. �� ���
	if (minute1 > minute2)
	{
		return 1;
	}
	if (minute1 < minute2)
	{
		return 0;
	}
	// �е� ����. �� ���
	if (second1 > second2)
	{
		return 1;
	}
	// �ʰ� ���ų� 2��°�� Ŭ ���
	return 0;
}