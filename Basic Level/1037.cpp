#include<bits/stdc++.h>
using namespace std;
stack<int> s;
bool f=true;
int main()
{
    int a[2],b[2],c[2];
    scanf("%d.%d.%d %d.%d.%d",&a[0],&b[0],&c[0],&a[1],&b[1],&c[1]);
    if(a[0]>a[1]||a[0]==a[1]&&b[0]>b[1]||a[0]==a[1]&&b[0]==b[1]&&c[0]>c[1])
    {
        f=false;
        swap(a[0],a[1]);
        swap(b[0],b[1]);
        swap(c[0],c[1]);
    }
    if(!f) cout<<'-';
    if(c[1]>=c[0]) s.push(c[1]-c[0]);
    else {s.push(c[1]+29-c[0]);--b[1];}
    if(b[1]>=b[0]) s.push(b[1]-b[0]);
    else {s.push(b[1]+17-b[0]);--a[1];}
    s.push(a[1]-a[0]);
    while(!s.empty()) {cout<<s.top();s.pop();if(!s.empty()) cout<<'.';}
    cout<<endl;
    return 0;
}
