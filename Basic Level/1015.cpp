#include<bits/stdc++.h>
using namespace std;

int n,l,h;

struct student
{
    int id;
    int de;
    int cai;
    int type;
}s[100010];

bool cmp(student a,student b)
{
    if(a.type!=b.type) return a.type>b.type;
    else if(a.de+a.cai!=b.de+b.cai) return a.de+a.cai>b.de+b.cai;
    else if(a.de!=b.de) return a.de>b.de;
    else return a.id<b.id;
}

int main()
{
    scanf("%d%d%d",&n,&l,&h);
    int cnt=0;
    for(int i=1;i<=n;++i)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(b>=l&&c>=l)
        {
            ++cnt;
            s[cnt].id=a;
            s[cnt].de=b;
            s[cnt].cai=c;
            if(b>=h&&c>=h) s[cnt].type=4;
            else if(b>=h&&c<h) s[cnt].type=3;
            else if(b<h&&c<h&&b>=c) s[cnt].type=2;
            else s[cnt].type=1;
        }
    }
    sort(s+1,s+cnt+1,cmp);
    printf("%d\n",cnt);
    for(int i=1;i<=cnt;++i)
    {
        printf("%d %d %d\n",s[i].id,s[i].de,s[i].cai);
    }
    return 0;
}
