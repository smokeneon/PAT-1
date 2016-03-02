#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    m%=n;
    vector<int> v;
    for(int i=1;i<=n;++i) {int x;cin>>x;v.push_back(x);}
    int cnt=0;
    for(int i=n-m;i<n;++i)
    {
        if(cnt==0) cout<<v[i];
        else cout<<' '<<v[i];
        ++cnt;
    }
    for(int i=0;i<n-m;++i)
    {
        if(cnt==0) cout<<v[i];
        else cout<<' '<<v[i];
        ++cnt;
    }
    cout<<endl;
    return 0;
}
