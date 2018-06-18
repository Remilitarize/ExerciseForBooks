#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){
	
	set<char> s;
	set<char>::iterator it;
	string temp;
	cout << "请输入一串英文字母序列：" << endl;
	getline(cin, temp);
	
	for(int i = 0; i < temp.length(); i ++){
		s.insert(temp[i]);
	}
	
	cout << "\n输入的字母序列对应的集合为" << endl;
	cout << "A = {";
	int cnt = 0;
	for(it = s.begin(); it != s.end(); it ++){
		cout << *it << (++cnt != s.size()? ", ": "");
	}
	cout << "}" << endl;
	
	return 0;
}
