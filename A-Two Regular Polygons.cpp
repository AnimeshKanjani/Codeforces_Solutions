#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <bits/stdc++.h>
#include <string>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define w(x) int x; cin>>x; while(x--)
#define int long long
const int MAX=1e10;
const int MIN=-1e10;
const int N=1e10;
/*int SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    int z=0;
    for (int p = 2; p <= n; p++)
        if (prime[p] && n%prime[p]==0){  z++;}
   cout<<z; return z;

}
class Solution {
   public:
   bool solve(string t, string s) {
      if(s == t)
      return true;
      int n = s.size();
      int m = t.size();
      int j = 0;
      for(int i = 0; i < n; i++){
         if(t[j] == s[i])
         j++;
         if(j == t.size())
         return true;
      }
      return false;
   }
};*/
/*template<size_t N>
bool check( int (&a)[N]){
    for(int i=0;iN){
      if(e%2==(e+1)%2) return true;
    }
    return false;
}*/
/*bool check(int n, int *a)
{
 for(int i=0;i<n-1;i++)
 {
    if(a[i+1]%2==a[i]%2) return true;
 }
 return false;
}*/
int32_t main()
{
    fastIO;
  w(x)
  {int n,m;
  cin>>n>>m;
  if(n%m==0) cout<<"YES\n"; else cout<<"NO\n";
  }
}

 //   w(x)
  //  {
      /*  int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int sw=0;
        while(check(n,a))
        {
            for(int i=0;i<n-1;i++)
            {
                if(a[i+1]%2==a[i]%2) {
                    swap(a[i+1],a[i]);
                    sw++;
                }
            }
        }
        cout<<sw<<endl;
        }*/
  /*  char x[100];
    int i=0;
    cin.getline(x,100);
   for(i=0;x[i]!='?';i++);

   for(;i>=0;i--){
        if( (x[i]>='a' && x[i]<='z')  || (x[i]>='A' && x[i]<='Z'))
        {
            if(x[i]=='a' || x[i]=='y' || x[i]=='Y' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' || x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U') cout<<"YES"; else cout<<x[i]<<"NO";
            break;
        }
    }*/

    //}
//}
 //  }
   /* w(x)
   {    map <int,int> p;
       int n,k;
       cin>>n>>k;
       int a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           p[a[i]]++;
       }
       int ans=0,o=0;
       for(auto i:p)
       {    //cout<<i.second<<" ";
           if(i.second>=k) {i.second=0; ans++;}
            if(i.second!=0) o=o+i.second;
       }
       //cout<<"\n";
       if(o%k==0) ans=ans+(o/k);
       else ans=ans+o/k+1;
       cout<<ans<<endl;



    }

}
*/
