#include<stdio.h>
 int main() {
 	char a;
 	scanf("%c", &a);
 	if ( a =='E' || a =='U' || a == 'O' || a == 'A' || a == 'I' || a == 'e' || a == 'u' || a == 'o' || a== 'a' || a == 'i') {
	 	printf("%c la nguyen am", a);
	 }
 	 else if (a>='a' && a<='z' || a >= 'A' && a <='Z') {
 		printf("%c la phu am", a);
	 }
	 else {
	 	printf("%c khong thuoc bang chu cai", a);
	 }
	 return 0;
 }
