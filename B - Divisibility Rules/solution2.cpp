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
  int b,d, m;
  cin>>b>>d;

  ll n=0;
  while((m=__gcd(b, d))>1){
    n++;
    d /= m;
  }
  
  bool b3=0, b11=0;

  m = __gcd(b-1, d);
  if(m>2){
    d /= m;
    b3 = 1;
  }
  m = __gcd(b+1, d);
  if(m>2){
    d /= m;
    b11 = 1;
  }
  if(!b3 && !b11 && d%2==0 && b%2==1){
    d/=2;
    b3=1;
  }
  if(d!=1) cout<<"7-type"<<endl;
  else if(n!=0 && (b3 || b11)) cout<<"6-type"<<endl;
  else if(b3 && b11) cout<<"6-type"<<endl;
  else if(b3) cout<<"3-type"<<endl;
  else if(b11) cout<<"11-type"<<endl;
  else if(n!=0) cout<<"2-type"<<endl<<n<<endl;
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