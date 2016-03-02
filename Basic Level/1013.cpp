#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i*i<=n;++i)
        if(n%i==0) return false;
    return true;
}
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(3);
    for(int i=5;;i+=2)
    {
        if(isprime(i)) v.push_back(i);
        if(v.size()==10001) break;
    }
    int n,m;
    cin>>n>>m;
    int cnt=0;
    for(int i=n;i<=m;++i)
    {
        ++cnt;
        if(cnt==1) cout<<v[i];
        else cout<<' '<<v[i];
        if(cnt==10)
        {
            cnt=0;
            cout<<endl;
        }
    }
    return 0;
}
