#include<bits/stdc++.h>
using namespace std;

int arr1[110];
int arr2[110];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i) cin>>arr1[i];
    for(int i=1;i<=n;++i) cin>>arr2[i];
    bool f=true;
    int tmp[110];
    memcpy(tmp+1,arr1+1,n*4);
    for(int i=1;i<=n;++i)
    {
        sort(tmp+1,tmp+i+1);
        bool tf=true;
        for(int j=1;j<=n;++j)
            if(tmp[j]!=arr2[j])
            tf=false;
        if(tf==true) f=false;
    }
    if(f)
    {
        cout<<"Merge Sort"<<endl;
        int k=1;
        while(k<n)
        {
            k*=2;
            int ff=true;
            for(int i=1;i<=n;i+=k)
            {
                for(int j=i+1;j<=min(i+k-1,n);++j)
                {
                    if(arr2[j]<arr2[j-1]) {ff=false;k/=2;break;}
                }
                if(!ff) break;
            }
            if(!ff) break;
        }
        k*=2;
        for(int i=1;i<=n;i+=k)
        {
            if(i+k-1<=n) sort(arr2+i,arr2+i+k);
            else sort(arr2+i,arr2+n+1);
        }
        for(int i=1;i<=n;++i)
        {
            if(i==1) cout<<arr2[i];
            else cout<<' '<<arr2[i];
        }
        cout<<endl;
    }
    else
    {
        cout<<"Insertion Sort"<<endl;
        int pos=2;
        while(pos<=n&&arr2[pos-1]<=arr2[pos]) ++pos;
        sort(arr2+1,arr2+pos+1) ;
        for(int i=1;i<=n;++i)
        {
            if(i==1) cout<<arr2[i];
            else cout<<' '<<arr2[i];
        }
        cout<<endl;
    }
    return 0;
}
