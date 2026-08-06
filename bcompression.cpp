#include<iostream>
#include<set>
using namespace std;
void solve(){
	int N;
	cin>>N;
	set<int> s;
	while(N--){
		int curr;
		cin>>curr;
		s.insert(curr);
		
	}
	cout<<s.size()<<endl;
	for(int v:s){
		cout<<v<<" ";
	}}
int main(){
	solve();
	return 0;
}
