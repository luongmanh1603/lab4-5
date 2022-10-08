// xem num1 va num2 co phai uoc cua nhau hay khong
#include<stdio.h>

int main() {
	int num1, num2;
	printf("cac so can nhap la:", num1, num2);
	scanf("%d%d", &num1, &num2);
	if ( num1 % num2 == 0) {
		printf("%d la uoc cua %d", num2, num1);
	} else if ( num2 % num1 == 0) {
		printf("%d la uoc cua %d", num1, num2);
	} else {
		printf("khong phai uoc cua nhau");
	}
	return 0;
}
