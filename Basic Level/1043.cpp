#include<bits/stdc++.h>
using namespace std;
int m[200];
int mm[6];
int main()
{
    char s[10010];
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<len;++i)
    {
        if(s[i]=='P'||s[i]=='A'||s[i]=='T'||s[i]=='e'||s[i]=='s'||s[i]=='t')
            ++m[s[i]];
    }
    mm[0]=m['P'];
    mm[1]=m['A'];
    mm[2]=m['T'];
    mm[3]=m['e'];
    mm[4]=m['s'];
    mm[5]=m['t'];
    int cnt=6;
    for(int i=0;i<6;++i)
    {
        if(mm[i]==0)
        {--cnt;}
    }
    while(cnt>0)
    {
        for(int i=0;i<6;++i)
        {
            if(mm[i]>0)
            {
                if(i==0) printf("P");
                else if(i==1) printf("A");
                else if(i==2) printf("T");
                else if(i==3) printf("e");
                else if(i==4) printf("s");
                else if(i==5) printf("t");
                --mm[i];
                if(!mm[i]) {--cnt;}
            }
        }
    }
    printf("\n");
    return 0;
}
