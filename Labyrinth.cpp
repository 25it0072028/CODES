#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include<string>
#include<queue>
using namespace std;
const int diff[5]={0,-1,0,1,0};
string dir="LURD";

	a[row][col]='#';
	for(int i=0;i<4;i++){
		int ar=row+diff[i], ac=col+diff[i+1];
		if (ar>=0&&ar<R&&ac>=0&&ac<C&&a[ar][ac]=='.'){
			dfs(R,C,ar,ac,a);
		}
	}
}
void solve(){
	int R,C;
	int rooms=0;
	cin>>R>>C;
	vector<string> g(R);
	for(int r=0;r<R;r++){
		cin>>g[r];
	}
	queue <pair<int,int>> q;
	for(int row=0;row<R;row++){
		for(int col=0;col<C;col++){
			if (g[row][col]=='A'){
				q.push(make_pair(row,col))
				row=R;
				break;
				
			}
		}
	}
	int hops=-1;
	while(!q.empty()){
		auto[row,col]=q.front();
		q.pop();
		int qsize=q.size();
		hops++;
		while(qsize--){
			for(int i=0;i<4;i++){
				int ar=row+diff[i], ac=col+diff[i+1];
				if(ar>=0&&ar<R&&ac>=0&&ac<C){
					if(g[ar][ac]=='.'){
						g[ar][ac]=dir[i];
						
					}else if(g[ar][ac]=='B'){
						cout<<hops<<endl;
						string ans="";
						ans+=dir[i];
						while(1){
							int prow=ar,pcol
						}
					}
					
				}
			}
		}
	}
	}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tc=1;
	while(tc--) solve();
}
