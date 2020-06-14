#include<iostream>
using namespace std;
int main()
{
    int T,count=6,c=0;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            }
            for(int i=0;i<n;i++)
            {
            if(a[i]==0)
            {
                count++;
            }
            if(a[i]==1)
            {
                if(count<6)
                {
                    cout<<"NO"<<endl;
                    c=1;
                    break;
            }
            count=1;
        }

    }
    count=6;
    if(c==0)
    {
    cout<<"YES"<<endl;
    }
    c=0;
}
}
