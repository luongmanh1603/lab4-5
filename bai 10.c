#include<stdio.h>

int main() {
	printf("Nhap do dai can doi: ");
	int n;
	scanf("%d", &n);
	int a;
	scanf("%d", &a);
	switch(a) {
		case 1: 
		printf(" Do dai theo mm: %d", n * 1000);
		break;
		case 2:
			printf("Do dai theo cm: %d", n * 100);
			break;
			case 3:
				printf("Do dai theo dm: %d", n * 10);
				break;
				case 4:
					printf("Do dai theo km: %f", n / 1000);
					break;
	}
	return 0;
}
