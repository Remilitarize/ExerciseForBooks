#include<iostream>
#include<string>
#include<sstream>
#include<set>
using namespace std;

int main(){
	
	set<string> s;
	set<string>::iterator it;
	int n;
	cout << "�������Ӽ�������";
	cin >> n;
	
	cout << "\n��ֱ���������Ӽ���ÿ���Ӽ�ռһ�У��Ӽ���ÿ��Ԫ���ÿո�ָ���(�ռ���������)" << endl;
	string temp, t;
	s.clear();
	for(int i = 0; i < n; i ++){
		getline(cin, temp);
		stringstream ss(temp);
		while(ss >> t){
			s.insert(t);
		}
	}
	
	if((1 << s.size()) != n){
		cout << "������Ӽ�����ȷ��" << endl;
	}
	else{
		cout << "������С�����ļ���Ϊ��\n{";
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
	}
	
	return 0;
}