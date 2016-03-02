#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
int ans1=0,ans2=0;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int s,g;
        cin>>s>>g;
        m[s]+=g;
        if(ans2<m[s]) {ans1=s;ans2=m[s];}
    }
    cout<<ans1<<' '<<ans2<<endl;
    return 0;
}
