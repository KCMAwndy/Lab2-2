#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int num1, num2, i = 1, max = 0;
	printf("Enter first number : ");
	scanf("%d", &num1);
	printf("Enter second number : ");
	scanf("%d", &num2);
	printf("Greatest common divisor : ");
	while (1) {
		if (num1 % i == 0 && num2 % i == 0) {
			if (max < i) max = i;
		}
		if (i > num1 || i > num2) {
			break;
		}
		i++;
	}
	printf("%d", max);
	return 0;
}