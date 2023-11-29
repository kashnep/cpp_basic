#include <bits/stdc++.h>
using namespace std;

void printV(vector<string> a) {
	for(string b : a) cout << b << "\n";
}

vector<string> split(string input, string delimeter) {
	vector<string> ret;
	int pos = 0;
	string token = "";
	while((pos = input.find(delimeter)) != string::npos) {
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + delimeter.size());
	}
	ret.push_back(input);
	return ret;
}

vector<string> fastSplit(string input, string delimeter) {
	vector<string> ret;
	int start = 0;
	int end = input.find(delimeter);
	while(end != string::npos) {
		ret.push_back(input.substr(start, end - start));
		start = end + delimeter.size();
		end = input.find(delimeter, start);
	}
	ret.push_back(input.substr(start));
	return ret;
}

int main() {
	string input = "ū���̴� ŷ�����׷� õ���Դϴ�. ��¥����!", delimeter = " ";
	printV(split(input, delimeter));
	printV(fastSplit(input, delimeter));
	return 0;
}
