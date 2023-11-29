#include <bits/stdc++.h>
using namespace std;
vector<int> v;
vector<int> a = {1, 2, 3};
void nextPermutation() {
	for(int i = 1 ; i <= 3 ; i++) {
		v.push_back(i);
	}
	 
	do {
		for(int i = 0 ; i < v.size() ; i++) {
			cout << v[i] << " ";
		}
		cout << "\n";
	}while(next_permutation(v.begin(), v.end()));
}

void printV(vector<int> a) {
	for(int i = 0 ; i < a.size() ; i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
}

void makePermutation(int n, int r, int depth) {
	if(n == depth) {
		printV(a);
		return;
	}
	for(int i = depth ; i < n ; i++) {
		swap(a[i], a[depth]);
		makePermutation(n, r, depth+1);
		swap(a[i], a[depth]);
	}
}

int main() {
	nextPermutation();
	makePermutation(3, 3, 0);
	return 0;
} 
