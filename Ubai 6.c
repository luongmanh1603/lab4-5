// 3 canh la canh cua tam giac huyen hay khong, canh nao la tam giac huyen
#include<stdio.h>
 
int main() {
	int a, b, c;
	printf("3 canh cua tam giac:", a, b, c);
	scanf("%d%d%d", &a, &b, &c);
	if (a*a == b*b + c*c) {
		printf("canh huyen la: %d", a);
	} else if (b*b == a*a + c*c) {
		printf("canh huyen la : %d", b);
	} else if (c*c == a*a + b*b) {
		printf("canh huyen la :%d", c);
	} else if ( a + c < b || b + c < a || a + b < c) {
		printf("khong phai la tam giac");
	}
	 else {
		printf("khong phai la tam giac vuong");
	}
	return 0; 
	}



