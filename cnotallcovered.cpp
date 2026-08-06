#include<iostream>
#include<vector>
#define ll long long int
using namespace std;
void solve(){
  int N,M;
  cin>>N>>M;
  vector<int>psum(N+2,0);
  while(M--){
    int from,to;
    cin>>from>>to;
    psum[from]++;
    psum[to+1]--;}
    int mini=200005;
    for(int w=1;w<=N;w++){
      psum[w]+=psum[w-1];
      mini=min(mini,psum[w]);
      
    
  } cout<<mini<<endl;
}
int main(){
 ios::sync_with_stdio(false);
 cin.tie(0);
 int tc=1;
 while(tc--){
 solve();
 }
}
