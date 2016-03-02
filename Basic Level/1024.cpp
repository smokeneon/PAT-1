#include<bits/stdc++.h>
using namespace std;

int getNum(string n)
{
    int len = n.length();
    int ret=0;
    for(int i=0;i<len;++i) ret = ret*10+n[i]-'0';
    return ret;
}

int main()
{
    string s;
    cin>>s;
    char c1 = s[0];
    int pos = s.find('E');
    string s1 = s.substr(pos+2);
    string mid = s.substr(3,pos-3);
    char c2 = s[pos+1];
    int p = getNum(s1);
    if(c2=='+')
    {
        if(c1!='+') cout<<c1;
        cout<<s[1];
        if(p>=mid.length())
        {
            cout<<mid;
            for(int i=1;i<=p-mid.length();++i) cout<<'0';
        }
        else
        {
            cout<<mid.substr(0,p);
            cout<<'.';
            cout<<mid.substr(p);
        }
    }
    else
    {
        if(p>0)
        {
            if(c1!='+') cout<<c1;
            cout<<"0.";
            for(int i=1;i<=p-1;++i) cout<<'0';
            cout<<s[1]<<mid;
        }
        else
        {
            if(c1!='+') cout<<c1;
            cout<<s[1]<<'.'<<mid;
        }
    }
    cout<<endl;
    return 0;
}
