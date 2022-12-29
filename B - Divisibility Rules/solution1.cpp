#include <bits/stdc++.h>

#define endl "\n"
#define loopUP(i, s, e, increament) for(int i = (s); i < (e); i+=increament)
#define loopDOWN(i, s, e, decreament) for(int i = (s); i >= (e); i-=decreament)
#define ll long long

using namespace std;

/*
  A-Z 65-90 to convert to small +32
  a-z 97-122 to convert to capital -32
  0-9 48-57
*/
ll m = 1e9+7;

void solve(){
  int b,d, c=0, m;
  cin>>b>>d;
 
  while((m=__gcd(b, d))>1){
    c++;
    d /= m;
  }
  if(d==1) cout<<"2-type"<<endl<<c<<endl;
  else if(c==0 && (b-1)%d==0) cout<<"3-type"<<endl;
  else if(c==0 && (b+1)%d == 0) cout<<"11-type"<<endl;
  else if((b-1)*(b+1)/(b%2+1) % d == 0) cout<<"6-type"<<endl;
  else cout<<"7-type"<<endl;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  int t=1;

  // cin>>t;
  //loopUP(i, 1, t+1, 1) solve(i);
  while(t--) {
    solve();
  }
  return 0;
}