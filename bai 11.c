#include<stdio.h>

int main() {
	int num1 = 6;
	int num2 = 5;
	char c;
	scanf("%c", &c);
	switch (c) {
		case '+':
			printf("%d ", num1 + num2);
			break;
		case '-':
		    printf("%d ", num1 - num2);
		    break;
		case '*':
		    printf("%d ", num1 * num2);
		    break;
		case '%':
		    printf("%d ", num1 % num2);
			break;	
	}
	return 0;
}
