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

    cout << "请输入集合 A 中的元素，以空格分隔（不包含集合元素）：" << endl;

    string temp;
    getline(cin, temp);
    stringstream ss(temp);

    while(ss >> temp){
        s.insert(temp);
    }

    cout << "\n输入的集合 A 为：" << endl;
    int cnt = 0;
    cout << "A = {";
    for (it = s.begin(); it != s.end(); it ++){
       	cout << *it << (++cnt != (s.size())? ", ": "");
    }
    cout << "}" << endl; 

    do{
        cout << "\n请输入要查找的元素：" << endl;
        cin >> temp;
        if(find(s, temp)){
        	cout << temp << " 属于 A" << endl;
		}
		else{
			cout << temp << " 不属于 A" << endl;
		}
    }while(1);

    return 0;
}
