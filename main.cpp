//hosna kazemian
#include<iostream>
using namespace std;

int fib(int n);

int main(){
	int number , sum = 0;
	cin >> number;
	for(int i = 1 ; i <= number ;i++){
		sum = sum + fib(i);
	}
	cout << "sum:" << sum;
	
	return 0;
}
int fib(int n){
	if(n ==1 || n == 2)
		return 1;
	else
	    return fib(n-1) + fib(n-2);
}
