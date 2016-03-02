#include<bits/stdc++.h>
using namespace std;

string week[] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};

int main()
{
    string s[4];
    cin>>s[0]>>s[1]>>s[2]>>s[3];
    int len[4];
    for(int i=0;i<4;++i) len[i]=s[i].length();
    string day;
    int hh,mm;
    int cnt=0;
    int l = min(len[0],len[1]);
    for(int i=0;i<l;++i)
    {
        if(s[0][i]==s[1][i])
        {
            if(!cnt&&s[0][i]>='A'&&s[0][i]<='G')
            {
                day=week[s[0][i]-'A'];
                ++cnt;
            }
            else if(cnt && (s[0][i]>='A'&&s[0][i]<='N'||isdigit(s[0][i])))
            {
                if(isdigit(s[0][i])) hh=s[0][i]-'0';
                else hh=s[0][i]-'A'+10;
                break;
            }
        }
    }
    l = min(len[2],len[3]);
    for(int i=0;i<l;++i)
    {
        if(s[2][i]==s[3][i]&&isalpha(s[2][i]))
        {
            mm=i;
            break;
        }
    }
    cout<<day<<' ';
    if(hh/10) cout<<hh;
    else cout<<'0'<<hh;
    cout<<':';
    if(mm/10) cout<<mm;
    else cout<<'0'<<mm;
    cout<<endl;
    return 0;
}
