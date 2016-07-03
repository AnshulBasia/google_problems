
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   long long t;
   cin>>t;
   string a,temp;
   long long flag,i;
   long long len;

   while(t>0)
   {
       t--;

       cin>>a;
       len=a.length();

       if(len==1)
        {
            cout<<"NO"<<endl;
            continue;
        }

       if(len%2==0)
       {
           if(a.substr(0,len/2)==a.substr((len/2),len/2))
           {cout<<"YES"<<endl;}
           else
           {cout<<"NO"<<endl;}
       }
       else
       {

            flag=0;
           for( i=len-1;i>=0;i--)
           {
               temp=a;
               temp.erase(i,1);
               if(temp.substr(0,(len-1)/2)==temp.substr(((len-1)/2),(len-1)/2))
                    {flag=1;break;}
           }

           if(flag==1){cout<<"YES"<<endl;}
           else{cout<<"NO"<<endl;}
        }

    }
}
