#include<bits/stdc++.h>
using namespace std;
int w[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char M[]={'1' ,'0', 'X', '9' ,'8' ,'7' ,'6', '5', '4', '3' ,'2'};
int main()
{
    int n;
    cin>>n;
    string s[110];
    for(int i=1;i<=n;i++) cin>>s[i];
    bool f=true;
    for(int i=1;i<=n;++i)
    {
        int sum=0;
        int j;
        for(j=0;j<17;++j)
        {
            if(isdigit(s[i][j]))
            {
                sum+=w[j]*(s[i][j]-'0');
            }
            else
            {
                cout<<s[i]<<endl;
                f=false;
                break;
            }
        }
        if(j!=17) continue;
        if(M[sum%11]!=s[i][17]) {cout<<s[i]<<endl;f=false;}
    }
    if(f) cout<<"All passed"<<endl;
    return 0;
}
