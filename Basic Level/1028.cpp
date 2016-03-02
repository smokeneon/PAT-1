#include<bits/stdc++.h>
using namespace std;
struct person
{
    char name[10];
    int y;
    int m;
    int d;
};
person p[100010];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i) scanf("%s %d/%d/%d",p[i].name,&p[i].y,&p[i].m,&p[i].d);
    int yy=2014;
    int mm=9;
    int dd=6;
    person maxp,minp;
    strcpy(maxp.name,"");
    strcpy(minp.name,"");
    int cnt=0;
    for(int i=1;i<=n;++i)
    {
        if((p[i].y>yy-200 || p[i].y==yy-200&&p[i].m>mm || p[i].y==yy-200&&p[i].m==mm&&p[i].d>=dd) &&
           (p[i].y<yy || p[i].y==yy&&p[i].m<mm || p[i].y==yy&&p[i].m==mm&&p[i].d<=dd))
        {
            ++cnt;
            if(strcmp(maxp.name,"")==0) {strcpy(maxp.name,p[i].name);maxp.y=p[i].y;maxp.m=p[i].m;maxp.d=p[i].d;}
            else if(p[i].y>maxp.y || p[i].y==maxp.y&&p[i].m>maxp.m || p[i].y==maxp.y&&p[i].m==maxp.m&&p[i].d>maxp.d)
                {strcpy(maxp.name,p[i].name);maxp.y=p[i].y;maxp.m=p[i].m;maxp.d=p[i].d;}
            if(strcmp(minp.name,"")==0) {strcpy(minp.name,p[i].name);minp.y=p[i].y;minp.m=p[i].m;minp.d=p[i].d;}
            else if(p[i].y<minp.y || p[i].y==minp.y&&p[i].m<minp.m || p[i].y==minp.y&&p[i].m==minp.m&&p[i].d<minp.d)
                {strcpy(minp.name,p[i].name);minp.y=p[i].y;minp.m=p[i].m;minp.d=p[i].d;}
        }
    }
    if(cnt==0) {printf("0\n");return 0;}
    printf("%d %s %s\n",cnt,minp.name,maxp.name);
    return 0;
}
