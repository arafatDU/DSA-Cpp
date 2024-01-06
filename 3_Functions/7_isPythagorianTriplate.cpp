#include<bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

bool isPythagorianTriplate(int x, int y, int z)
{
    if((x*x) == (y*y + z*z)) return true;
    else if((y*y) == (x*x + z*z)) return true;
    else if((z*z) == (x*x + y*y)) return true;
    else return false;
}

int main()
{
    #ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif
    int x, y, z;
    cin>>x>>y>>z;
    
    if(isPythagorianTriplate(x, y, z)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}