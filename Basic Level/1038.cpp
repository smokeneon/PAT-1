#include<bits/stdc++.h>
using namespace std;
int nn[110];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i) {int x;cin>>x;++nn[x];}
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int x;
        cin>>x;
        if(i==1) cout<<nn[x];
        else cout<<' '<<nn[x];
    }
    cout<<endl;
    return 0;
}
