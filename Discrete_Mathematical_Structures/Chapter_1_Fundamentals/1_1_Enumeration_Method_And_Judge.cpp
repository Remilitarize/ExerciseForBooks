#include<iostream>
#include<set>
#include<string>
#include<sstream>
using namespace std;

set<string> s;
set<string>::iterator it;

bool find(const set<string> s, const string element){
	for(it = s.begin(); it != s.end(); it ++){
		if(element.compare(*it) == 0){
			return true;
		}
	}
	return false;
}

int main(){

    cout << "�����뼯�� A �е�Ԫ�أ��Կո�ָ�������������Ԫ�أ���" << endl;

    string temp;
    getline(cin, temp);
    stringstream ss(temp);

    while(ss >> temp){
        s.insert(temp);
    }

    cout << "\n����ļ��� A Ϊ��" << endl;
    int cnt = 0;
    cout << "A = {";
    for (it = s.begin(); it != s.end(); it ++){
       	cout << *it << (++cnt != (s.size())? ", ": "");
    }
    cout << "}" << endl; 

    do{
        cout << "\n������Ҫ���ҵ�Ԫ�أ�" << endl;
        cin >> temp;
        if(find(s, temp)){
        	cout << temp << " ���� A" << endl;
		}
		else{
			cout << temp << " ������ A" << endl;
		}
    }while(1);

    return 0;
}
