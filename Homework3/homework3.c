#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void problem2();
void problem4();
void problem6();
void problem8();
void problem10();

int main()
{
	problem2();
	problem4();
	problem6();
	problem8();
	problem10();

	return 0;
}

void problem2()
{
	int hexadecimal;
	printf("16���� ������ �Է��Ͻÿ�: ");
	scanf("%x", &hexadecimal);

	printf("8�����δ� %#o�Դϴ�\n", hexadecimal);
	printf("10�����δ� %d�Դϴ�\n", hexadecimal);
	printf("16�����δ� %#x�Դϴ�\n\n", hexadecimal);
}

void problem4()
{
	double width, length, height;
	printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");
	scanf("%lf %lf %lf", &width, &length, &height);

	printf("������ ���Ǵ� %lf�Դϴ�.\n\n", width * length * height);
}

void problem6()
{
	double num1 = 3.32e-3;
	double num2 = 9.76e-8;
	printf("%lf\n\n", num1 + num2);
}

void problem8()
{
	int	num;
	printf("�ƽ�Ű �ڵ尪�� �Է��Ͻÿ�: ");
	scanf("%d", &num);
	char ascii = (char)num;
	printf("����: %c�Դϴ�.\n\n", ascii);
}

void problem10()
{
	printf("\a");
	printf("ȭ�簡 �߻��Ͽ����ϴ�.");
	printf("\a");
}