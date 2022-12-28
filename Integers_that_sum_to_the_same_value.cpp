/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,count=0;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        if(i+j==num) count++;
    }cout<<count<<endl;
    return 0;
} */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,count=0;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if((i+j) == num)
            count++;
        }
    }cout<<count;
    return 0;
}