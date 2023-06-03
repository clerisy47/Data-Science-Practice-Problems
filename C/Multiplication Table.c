#include <stdio.h> 
int mtable(int n) { 
	for(int i = 1; i <= 10; ++i) { 
		printf("%d * %d = %d\n",n,i,i*n); 
	} 
} 
int main() { 
	int n; 
	printf("Enter the value of n : "); 
	scanf("%d",&n); 
	printf("\n"); 
	mtable(n); 
} 