#include<iostream>
#include<vector>
using namespace std;

int main()
{

    int a[10];
    for(int i=0;i<10;i++){cin>>a[i];}
    int max=2;
    int len=2;
    int index;
    vector<int> v;
    v.push_back(a[0]);
    int j=1;
    while(1)
    {
        if(a[j]!=a[0])
        {
            v.push_back(a[j]);
            break;
        }
        j++;
    }
    v.push_back(a[1]);
    for(int i=2;i<10;i++)
    {
        if(v[0]==a[i]||v[1]==a[i])
        {
            len++;
            if(len>max){max=len; index=i;}

        }

        else
        {
            v.clear();
            v.push_back(a[i]);
            v.push_back(a[i-1]);
            len=2;
        }
        //cout<<len<<" "<<a[i]<<endl;


    }
    cout<<max<<" "<<index;
}
