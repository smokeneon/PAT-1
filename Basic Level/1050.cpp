#include<bits/stdc++.h>
using namespace std;
vector<int> a;
map<pair<int,int>,int> out;
int main()
{
    int N;
    scanf("%d",&N);
    a.push_back(0);
    for(int i=1;i<=N;++i) {int x;scanf("%d",&x);a.push_back(x);}
    int m,n;
    for(int i=1;i*i<=N;++i)
    {
        if(N%i==0)
        {
            n=i;
            m=N/i;
        }
    }
    int i=1,j=0;
    sort(++a.begin(),a.end(),greater<int>());
    int cnt=0;
    for(i=1;i<=m;++i)
        for(j=1;j<=n;++j)
            out[make_pair(i,j)]=-1;
    i=1;j=0;
    while(cnt<N)
    {
        //cout<<i<<' '<<j<<endl;
        while(out[make_pair(i,j+1)]==-1) {++j;out[make_pair(i,j)]=a[++cnt];}
        while(out[make_pair(i+1,j)]==-1) {++i;out[make_pair(i,j)]=a[++cnt];}
        while(out[make_pair(i,j-1)]==-1) {--j;out[make_pair(i,j)]=a[++cnt];}
        while(out[make_pair(i-1,j)]==-1) {--i;out[make_pair(i,j)]=a[++cnt];}
    }
    for(i=1;i<=m;++i)
    {
        for(j=1;j<=n;++j)
        {
            if(j==1) printf("%d",out[make_pair(i,j)]);
            else printf(" %d",out[make_pair(i,j)]);
        }
        printf("\n");
    }
    return 0;
}
