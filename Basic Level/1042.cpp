#include<bits/stdc++.h>
using namespace std;
map<char,int> m;
int main()
{
    string s;
    getline(cin,s);
    int len=s.length();
    int minzm=1000;
    int maxx=0;
    for(int i=0;i<len;++i)
    {
        if(isalpha(s[i]))
        {
            ++m[tolower(s[i])];
            maxx=max(maxx,m[tolower(s[i])]);
        }
    }
    for(int i=0;i<len;++i)
    {
        if(isalpha(s[i])&&maxx==m[tolower(s[i])])
        {
            minzm=min(minzm,tolower(s[i]));
        }
    }
    cout<<(char)minzm<<' '<<maxx<<endl;
    return 0;
}
