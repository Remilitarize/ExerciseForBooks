#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

// 参数分别为：集合本身、是否在本次DFS访问、已选取个数、上次选取位置、当前子集长度
void dfs(vector<string> v, bool visited[], int count, int last, int seg){
	
	int len = v.size();
	if(count == seg){
		cout << ", " << endl;
		cout << "{";
		bool first = true;
		for(int i = 0; i < len; i ++){
			if(visited[i]){
				if(first){	
					first = false;
				}
				else{
					cout << ", ";
				}
				cout << v[i];			
			}
		}
		cout << "}";
		return ;
	}
	
	for(int i = last; i < len; i ++){
		if(!visited[i]){
			visited[i] = true;
			dfs(v, visited, count+1, i, seg);
			visited[i] = false;
		}
	}
	
}

int main(){
	
	vector<string> v;
	cout << "请输入集合，元素间用空格分隔：" << endl;
	string temp;
	getline(cin, temp);
	
	stringstream ss(temp); 
	while(ss >> temp){
		v.push_back(temp);
	}
	
	cout << "集合的幂集 P(A) = " << endl;
	cout << "{ {}";
	int len = v.size();
	for(int i = 1; i <= len; i ++){
		bool* visited = new bool[len];
		fill(visited, visited+len, false);
		dfs(v, visited, 0, 0, i);
	}
	cout << "}" << endl;
	
	return 0;
} 
