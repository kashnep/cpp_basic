#include <bits/stdc++.h>
using namespace std;
int fact(int n) {
	if(n==1 || n==0) return 1;
	// cout << n << "\n";
	return n * fact(n-1);
}

int fact2(int n) {
	int rslt = 1;
	if(n==1 || n==0) return 1;
	for(int i = 1; i <= n ; i++) {
		rslt *= i;
	}
	return rslt;
}
int fibo(int n) {
	if(n==1 || n==0) return 1;
	return fibo(n-1) + fibo(n-2);
}
int main()
{
    cout << "factorial : " << fact(10) << "\n";
    cout << "factorial2 : " << fact2(10) << "\n";
    cout << "fibonacci : " << fibo(10) << "\n";
    return 0;
}
