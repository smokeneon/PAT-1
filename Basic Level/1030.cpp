#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long> v;
    long long n,p;
    cin>>n>>p;
    for(int i=1;i<=n;++i) {int x;cin>>x;v.push_back(x);}
    sort(v.begin(),v.end());
    int st=0,ed=0,cnt=0;
    while(ed<n)
    {
        while(v[ed]<=v[st]*p&&ed<n) ++ed;
        cnt=max(ed-st,cnt);
        ++st;
    }
    cout<<cnt<<endl;
    return 0;
}
