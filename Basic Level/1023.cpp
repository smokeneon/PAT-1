#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    memset(a,0,sizeof a);
    for(int i=0;i<10;++i) cin>>a[i];
    int p=1;
    while(a[p]==0) ++p;
    cout<<p;
    --a[p];
    for(int i=0;i<10;++i)
    {
        for(int j=1;j<=a[i];++j)
        {
            cout<<i;
        }
    }
    cout<<endl;
    return 0;
}
