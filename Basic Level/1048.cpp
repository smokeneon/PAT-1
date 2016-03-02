#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    int len1=s1.length();
    int len2=s2.length();
    if(len1>len2)
    {
        for(int i=1;i<=len1-len2;++i) s2+='0';
    }
    int wei=1;
    for(int i=0;i<len1;++i,++wei)
    {
        if(wei&1)
        {
            int tmp=s2[i]-'0';
            tmp+=s1[i]-'0';
            tmp%=13;
            if(tmp<10) s2[i]=tmp+'0';
            else if(tmp==10) s2[i]='J';
            else if(tmp==11) s2[i]='Q';
            else if(tmp==12) s2[i]='K';
        }
        else
        {
            int tmp=s2[i]-s1[i];
            if(tmp<0) tmp+=10;
            s2[i]=tmp+'0';
        }
    }
    reverse(s2.begin(),s2.end());
    cout<<s2<<endl;
    return 0;
}
