#include<bits/stdc++.h>
using namespace std;

long long gao(int cnt)
{
    long long ret=1;
    while(cnt--) ret*=10;
    return (ret-1)/9;
}

int main()
{
    string a,b;
    int aa,bb;
    int cnt1=0,cnt2=0;
    cin>>a>>aa>>b>>bb;
    for(int i=0;i<a.length();++i)
        if(a[i]-'0'==aa) ++cnt1;
    for(int i=0;i<b.length();++i)
        if(b[i]-'0'==bb) ++cnt2;
    cout<<aa*gao(cnt1)+bb*gao(cnt2)<<endl;
    return 0;
}
