#include<stdio.h>

int main() {
	int a;
	printf("Dap an ban chon: ", a);
	scanf("%d", &a);
	switch(a) {
		case 1: 
		printf("Ban chon CF");
		break;
		case 2:
			printf("Ban chon C");
			break;
		case 3:
			printf("Ban chon HDJ");
			break;
		case 4:
			printf("Ban chon Dreamwaver");
			break;
		case 5:
			printf("Ban chon RDBMS");
			break;
		case 6:
			printf("Ban chon Learn Java by example");
			break;
	}
	if (a> 6 && a < 1) {
		printf(" Ban chon sai");
	}
	return 0;
	}

