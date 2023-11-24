#include <bits/stdc++.h> // --- (1) 
using namespace std; // --- (2) 
#define PI 3.14159 
#define loop(x,n) for(int x = 0; x < n; x++)
typedef string s; // ---(3-1)
typedef int i;
i sum = 0;
s a; // --- (3) 
int main(){ 
	cin >> a; // --- (4) 
	loop(i, 11) {
		sum += i;
	}
	cout << a << sum << PI << "\n"; // --- (5) 
	return 0; // - (6) 
}
