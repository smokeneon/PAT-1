#include<bits/stdc++.h>
using namespace std;
bool f=true;
map<char,int> m;
int cnt=0;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int len1=s1.length();
    for(int i=0;i<len1;++i) ++m[s1[i]];
    int len2=s2.length();
    for(int i=0;i<len2;++i)
    {
        if(m[s2[i]]==0) {++cnt;f=false;}
        else {--m[s2[i]];}
    }
    if(f)
    {
        cout<<"Yes "<<len1-len2<<endl;
    }
    else
    {
        cout<<"No "<<cnt<<endl;
    }
    return 0;
}
