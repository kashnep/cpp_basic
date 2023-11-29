#include <bits/stdc++.h>
using namespace std;
int main(){
	string a = "love is";
	a += " pain!";
	a.pop_back();
	cout << a << " : " << a.size() << "\n";
	cout << char(* a.begin()) << '\n';  
	cout << char(* (a.end()-1)) << '\n';
	a.insert(0, "test "); 
	cout << a << " : " << a.size() << "\n";
	a.erase(0, 5);
	cout << a << " : " << a.size() << "\n";
	auto it = a.find("love"); 
	
	if (it != string::npos){
	cout << "포함되어있다." << '\n';
	}
	cout << it << '\n';
	cout << string::npos << '\n';
	cout << a.substr(5, 2) << '\n';
	
	string t = "It's hard to have a sore leg";
	reverse(t.begin(), t.end());
	cout << t << "\n";
	reverse(t.begin(), t.end());
	cout << t << "\n";
	reverse(t.begin()+3, t.end());
	cout << t << "\n";
	return 0;
}

