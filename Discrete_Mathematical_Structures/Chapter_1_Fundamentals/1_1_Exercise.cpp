#include<cstdio>
#include<cmath>
using namespace std;

long long Fibonacci(int n){
	int first = 0;
	int second = 1;
	
	int i, temp;
	for(i = 2; i <= n; i ++){
		temp = first + second;
		first = second;
		second = temp;
	}
	return second;
}

int main(){
	
	printf("%d", Fibonacci(20));
	
	return 0;
}