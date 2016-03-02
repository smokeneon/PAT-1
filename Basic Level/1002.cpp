#include<iostream>
#include<sstream>
#include<map>
using namespace std;

map<int,string> m;

template<typename T>
string AnyToString(T x)
{
    stringstream ss;
    ss<<x;
    return ss.str();
}

int main()
{
    m[0]="ling";
    m[1]="yi";
    m[2]="er";
    m[3]="san";
    m[4]="si";
    m[5]="wu";
    m[6]="liu";
    m[7]="qi";
    m[8]="ba";
    m[9]="jiu";
    string s;
    cin>>s;
    int len = s.length();
    int sum=0;
    for(int i=0;i<len;++i)
    {
        sum+=s[i]-'0';
    }
    string ans = AnyToString(sum);
    int ansLen = ans.length();
    for(int i=0;i<ansLen;++i)
    {
        if(i==0) cout<<m[ans[i]-'0'];
        else cout<<' '<<m[ans[i]-'0'];
    }
    cout<<endl;
    return 0;
}
