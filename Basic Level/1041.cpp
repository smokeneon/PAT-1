#include<bits/stdc++.h>
using namespace std;
map<int,pair<string,int> > m;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        int b,c;
        cin>>a>>b>>c;
        m[b]=make_pair(a,c);
    }
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int x;
        cin>>x;
        cout<<m[x].first<<' '<<m[x].second<<endl;
    }
    return 0;
}
