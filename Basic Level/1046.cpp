#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b,c,d;
    int jcnt=0,ycnt=0;
    while(n--)
    {
        cin>>a>>b>>c>>d;
        if(a+c==b&&a+c==d||a+c!=b&&a+c!=d) continue;
        else
        {
            if(a+c==b) ++ycnt;
            else ++jcnt;
        }
    }
    cout<<jcnt<<' '<<ycnt<<endl;
    return 0;
}
