#include<bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define ll long long


int binaryToDeci(int binary){
  int decimal = 0, i=0;
  while(binary){
    decimal += ((binary%10)*pow(2, i));
    i++;
    binary /= 10;
  }
  return decimal;
}

int octalToDeci(int octal){
  int decimal = 0, i=0;
  while(octal){
    decimal += ((octal%10)*pow(8, i));
    i++;
    octal /= 10;
  }
  return decimal;
}


int main()
{
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int decimal, binary, octal;
    cin>>binary>>octal;

    decimal = binaryToDeci(binary);
    cout<<decimal<<endl;


    decimal = octalToDeci(octal);
    cout<<decimal<<endl;
    

    return 0;
}