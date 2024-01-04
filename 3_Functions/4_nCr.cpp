#include<bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

int fact(int n)
{
    int factorial = 1;
    for(int i=2; i<=n; i++){
        factorial *= i;
    }
    return factorial;
}


int main()
{
    #ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif
    int n, r;
    cin>>n>>r;
    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;

    return 0;
}