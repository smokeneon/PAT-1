#include<bits/stdc++.h>
using namespace std;

struct s
{
    string name;
    string id;
    int grade;
};

int main()
{
    s stu[2];
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        string name,id;
        int grade;
        cin>>name>>id>>grade;
        if(i==1)
        {
            stu[0].name = name;
            stu[0].id = id;
            stu[0].grade = grade;
            stu[1].name = name;
            stu[1].id = id;
            stu[1].grade = grade;
        }
        else
        {
            if(grade<stu[0].grade)
            {
                stu[0].name = name;
                stu[0].id = id;
                stu[0].grade = grade;
            }
            if(grade>stu[1].grade)
            {
                stu[1].name = name;
                stu[1].id = id;
                stu[1].grade = grade;
            }
        }
    }
    for(int i=1;i>=0;--i)
    {
        cout<<stu[i].name<<' '<<stu[i].id<<endl;
    }
    return 0;
}
