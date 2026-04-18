#include <stdio.h>
int main()
{
	int a,b,c;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	printf("nhap c: ");
	scanf("%d",&c);
	if( a + b > c && a + c > b && b + c > a){
			printf("tam giac ");
			if (a == b && b == c && c ==a){
				printf("deu");
			}
			else if(a == b || b == c || c== a){
				printf("can");
			}
			else if(a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a){
				printf ("vuong");
			}
			else{
				printf("thuong");
			}
	}	return 0;
}