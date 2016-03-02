#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<char,int> m[2];
    int win[2]={0},lose[2]={0},pin[2]={0};
    for(int i=1;i<=n;++i)
    {
        char a,b;
        cin>>a>>b;
        if(a==b)
        {
            ++pin[0];
            ++pin[1];
        }
        else if(a=='C'&&b=='J'
                ||a=='J'&&b=='B'
                ||a=='B'&&b=='C')
        {
            ++win[0];
            ++lose[1];
            ++m[0][a];
        }
        else
        {
            ++lose[0];
            ++win[1];
            ++m[1][b];
        }
    }
    cout<<win[0]<<' '<<pin[0]<<' '<<lose[0]<<endl;
    cout<<win[1]<<' '<<pin[1]<<' '<<lose[1]<<endl;
    if(m[0]['B']>=m[0]['C']&&m[0]['B']>=m[0]['J']) cout<<'B';
    if(m[0]['C']>m[0]['B']&&m[0]['C']>=m[0]['J']) cout<<'C';
    if(m[0]['J']>m[0]['B']&&m[0]['J']>m[0]['C']) cout<<'J';
    cout<<' ';
    if(m[1]['B']>=m[1]['C']&&m[1]['B']>=m[1]['J']) cout<<'B';
    if(m[1]['C']>m[1]['B']&&m[1]['C']>=m[1]['J']) cout<<'C';
    if(m[1]['J']>m[1]['B']&&m[1]['J']>m[1]['C']) cout<<'J';
    return 0;
}
