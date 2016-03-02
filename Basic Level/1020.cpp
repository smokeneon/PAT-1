#include<bits/stdc++.h>
using namespace std;

struct mooncake
{
    double a;
    double b;
    double aver;
}m[1010];

bool cmp(mooncake a,mooncake b)
{
    return a.aver>b.aver;
}

int main()
{
    int n;
    double w;
    scanf("%d%lf",&n,&w);
    for(int i=1;i<=n;++i) scanf("%lf",&m[i].a);
    for(int i=1;i<=n;++i)
    {
        scanf("%lf",&m[i].b);
        m[i].aver = m[i].b/m[i].a;
    }
    sort(m+1,m+n+1,cmp);
    double sum=0;
    int i=1;
    while(w>0&&i<=n)
    {
        if(w>m[i].a) {sum+=m[i].b;w-=m[i].a;}
        else {sum+=m[i].b*w/m[i].a;w=0;}
        ++i;
    }
    printf("%.2f\n",sum);
    return 0;
}
