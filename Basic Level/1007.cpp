#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for(int i=2;i*i<=n;++i)
        if(n%i==0) return false;
    return true;
}

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=2;i<=n;++i) if(isPrime(i)) v.push_back(i);
    int len = v.size();
    int ans=0;
    for(int i=1;i<len;++i) if(v[i]-v[i-1]==2) ++ans;
    cout<<ans<<endl;
    return 0;
}
