#include<bits/stdc++.h>
using namespace std;
const long long MO = 1000000007;
long long cnt=0;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    long long Pcnt=0;
    long long Tcnt=0;
    for(int i=0;i<len;++i) if(s[i]=='T') ++Tcnt;
    int APos=0;
    while(APos<len-1)
    {
        while(s[APos]!='A'&&APos<len-1)
        {
            if(s[APos]=='P') ++Pcnt;
            else --Tcnt;
            ++APos;
        }
        if(APos==len-1) break;
        cnt+=Pcnt*Tcnt;
        cnt%=MO;
        ++APos;
    }
    cout<<cnt<<endl;
    return 0;
}
