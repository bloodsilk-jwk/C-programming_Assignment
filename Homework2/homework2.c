#define _CRT_SECURE_NO_WARNIGNS
#include <stdio.h>

void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();


int main()
{
	problem1();
	problem2();
	problem3();
	problem4();
	problem5();
	problem6();
	return 0;
}

void problem1()
{
	float num1, num2, num3, sum;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%f", &num1);
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%f", &num2);
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%f", &num3);

	sum = num1 + num2 + num3;
	printf("���� %f�̰� ����� %f�Դϴ�.\n\n", sum, sum / 3);
}

void problem2()
{
	float mile;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%f", &mile);

	printf("%.1f������ %f�����Դϴ�.\n\n", mile, (double)mile * 1609);
}

void problem3()
{
	float base, height, area;
	printf("�ﰢ���� �غ�: ");
	scanf("%f", &base);
	printf("�ﰢ���� ����: ");
	scanf("%f", &height);

	area = (base * height) / 2;
	printf("�ﰢ���� ����: %f\n\n", area);
}

void problem4()
{
	float celsius, fahrenheit;
	printf("ȭ������ �Է��Ͻÿ�: ");
	scanf("%f", &fahrenheit);

	celsius = (5 * (fahrenheit - 32)) / 9;
	printf("�������� %f���Դϴ�.\n\n", celsius);
}

void problem5()
{
	float unknown, answer;
	printf("�Ǽ��� �Է��ϼ���: ");
	scanf("%f", &unknown);

	answer = 3 * (unknown * unknown) + 7 * unknown + 11;
	printf("���׽��� ���� %f\n\n", answer);
}

void problem6()
{
	float weight;
	printf("�����Ը� �Է��ϼ��� (����: kg): ");
	scanf("%f", &weight);

	printf("�޿����� �����Դ� %fkg�Դϴ�.", weight * 0.17);
}
