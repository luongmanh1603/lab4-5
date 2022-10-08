#include<stdio.h>
#include<math.h>

int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	float denta = b*b-4*a*c;
if (a==0)
{printf("phuong trinh vua nhap la phuong trinh bac nhat");}
else
 if (denta > 0)
{ float x1 = (-b+sqrt(denta))/(2*a);
float x2 = (-b-sqrt(denta))/(2*a);
printf("phuong trinh co 2 nghiem phan biet: %f  %f",x1,x2);}
else if (denta == 0)
{ float x=(-b)/(2*a);
printf("phuong tring co 1 nghiem kep: x= %f",x);} 
 else {printf("phuong trinh vo nghiem");}
return 0;
}	
	
