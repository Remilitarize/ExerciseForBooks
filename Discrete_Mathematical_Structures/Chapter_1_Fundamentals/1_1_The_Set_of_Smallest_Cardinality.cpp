#include<iostream>
#include<string>
#include<sstream>
#include<set>
using namespace std;

int main(){
	
	set<string> s;
	set<string>::iterator it;
	int n;
	cout << "请输入子集个数：";
	cin >> n;
	cin.ignore();
	
	cout << "\n请分别输入各个子集，每个子集占一行，子集中每个元素用空格分隔：(空集输入空行)" << endl;
	string temp, t;
	s.clear();
	for(int i = 0; i < n; i ++){
		getline(cin, temp);
		stringstream ss(temp);
		while(ss >> t){
			s.insert(t);
		}
	}
	
	cout << "具有最小基数的集合为：\n{";
	bool first = true;
	for(it = s.begin(); it != s.end(); it ++){
		if(first){
			first = false;
		}
		else{
			cout << ", "; 
		}
		cout << *it;
	} 
	cout << "}" << endl;
	
	return 0;
}
