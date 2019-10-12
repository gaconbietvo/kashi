#include<stdio.h> 
	int fib(int n) { 
	int a = 0, b = 1, c, i; 
	if( n == 0) 
	return a; 
	for (i = 2; i <= n; i++) {	 
	c = a + b; 
	a = b; 
	b = c; 
	} 
	return b; 
	} 
	int main (){
	int n = 20; 
	printf("So thu 20 trong day so Fibonacci la: %d", fib(n)); 
	getchar(); 
	return 0; 
}
