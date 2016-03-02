#include<bits/stdc++.h>
using namespace std;

bool gao(string str)
{
    int len = str.length();
    int Ppos = -1;
    int Tpos = -1;
    int Pcnt = 0;
    int Tcnt = 0;
    for(int i=0;i<len;++i)
    {
        if(str[i]!='P'&&str[i]!='A'&&str[i]!='T') return false;
        if(str[i]=='P')
        {
            ++Pcnt;
            if(Pcnt == 2) return false;
            else Ppos = i;
        }
        else if(str[i]=='T')
        {
            ++Tcnt;
            if(Tcnt == 2) return false;
            else Tpos = i;
        }
    }
    int cnt1 = Ppos;
    int cnt2 = Tpos - Ppos - 1;
    int cnt3 = len-Tpos-1;
    if(cnt2 == 1 && cnt3 == cnt1) return true;
    else if(cnt2 <= 0) return false;
    string nstr = "";
    for(int i=1;i<=cnt1;++i) nstr+="A";
    nstr+="P";
    for(int i=1;i<=cnt2-1;++i) nstr+="A";
    nstr+="T";
    for(int i=1;i<=cnt3 - cnt1;++i) nstr+="A";
    return gao(nstr);
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        cout<<(gao(str)?"YES":"NO")<<endl;
    }
    return 0;
}
