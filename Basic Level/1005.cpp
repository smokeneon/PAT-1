#include<bits/stdc++.h>
using namespace std;

map<int,int> m;

bool cmp(int a,int b)
{
    return a>b;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=1;i<=n;++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
        while(x!=1)
        {
            ++m[x];
            if(x&1) x = (x*3+1)>>1;
            else x>>=1;
        }
    }
    vector<int> ans;
    for(int i=1;i<=n;++i)
    {
        if(m[v[i-1]]==1) ans.push_back(v[i-1]);
    }
    sort(ans.begin(),ans.end(),cmp);
    vector<int>::iterator it;
    int cnt=0;
    for(it=ans.begin();it!=ans.end();++it)
    {
        if(cnt) cout<<' '<<*it;
        else cout<<*it;
        ++cnt;
    }
    cout<<endl;
    return 0;
}
