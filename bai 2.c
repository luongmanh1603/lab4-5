#include<stdio.h>

int main() {
	char ch;
	printf("nhap 1 chu cai: %c", ch);
	scanf("%c", &ch);

	if (ch >='A' && ch <= 'Z') {
		printf("%c la chu viet hoa", ch);
	}
	if (ch >= 'a' && ch <= 'z') {
		printf("%c la chu thuong", ch);
	}
	return 0;
}
