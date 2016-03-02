#include<bits/stdc++.h>
using namespace std;
int team[1010];
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c;
    while(n--)
    {
        scanf("%d-%d %d",&a,&b,&c);
        team[a]+=c;
    }
    int maxt=0,maxx=0;
    for(int i=1;i<=1000;++i)
    {
        if(team[i]>maxx)
        {
            maxt=i;
            maxx=team[i];
        }
    }
    printf("%d %d\n",maxt,maxx);
    return 0;
}
