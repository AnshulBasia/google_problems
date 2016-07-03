#include <iostream>
#include <math.h>
#include <stack>
#include <fstream>
using namespace std;
#include <string.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>


int main()
{
    vector<int> friends;
    int n;
    cin>>n;
    int l;
    friends.push_back(-1);
    for(int i=1;i<=n;i++){cin>>l;friends.push_back(l);}
    int length=0;
    int temp;
    vector<int> bff;
    int ans=0;
    vector<int> sol;

    for(int i=1;i<=n;i++)
    {  cout<<"i="<<i<<endl;
         int flag=i;
        bff.push_back(flag);

        while(1>0)
        {
            temp=friends[flag];
            cout<<temp<<"friends[temp]="<<friends[temp]<<endl;
            bff.push_back(temp);
            cout<<"xdfs"<<bff.begin();
            if(find(bff.begin(), bff.end(), friends[temp])!= bff.end())
                {cout<<"here "<<find(bff.begin(), bff.end(), friends[temp])<<endl;
                if(friends[temp]==flag)
                    {
                        for(int q=0;q<n;q++)
                        {
                            if(find(bff.begin(), bff.end(), q) != bff.end())
                            {bff.push_back(q);flag=q; break;}
                        }
                    }
                if(bff[0]==friends[temp]){break;}

            }
            else
            {
                flag=temp;
            }
        }

        if(bff.size()>length){length=bff.size();ans=i; for(int k=0;k<bff.size();k++){sol.push_back(bff[k]);}}
    }
    for(int k=0;k<bff.size();k++){cout<<sol[k]<<endl;}
}
