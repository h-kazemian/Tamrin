//hosna kazemian
#include<iostream>
using namespace std;

int fib(int n);

int main(){
	int number;
	cin >> number;
	for(int i = 1 ; i <= number ;i++){
		cout << fib(i) << " ";
	}
	
	return 0;
}
int fib(int n){
	if(n ==1 || n == 2)
		return 1;
	else
	    return fib(n-1) + fib(n-2);
}
