
#include<stdio.h>
int f[5] = { 1652, -3927, 5995, -781, 7068 };
int i, n, b, sum;
int main(){
	scanf("%d",&n);
	while( n ){
		sum = 0;
		n %= 10007;
		n = (n*n)%10007;
		b = n;
		for( i=0; i!=5; ++i ){
			sum = ( f[i]*b + sum )%10007;
			b = (b*n)%10007;
		}
		printf( "%d\n", sum );
		scanf("%d",&n);
	}
	return 0;
}
