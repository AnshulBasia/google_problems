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

bool win_pos(long a,long b)
{
     if(a==b){return 0;}
    long x=min(a,b);
    long y=max(a,b);
    cout<<x<<" "<<y<<endl;
    getch();
    if(y%x==0){return 1;}
    if(x==1||y==1){return 1;}
    if(x-y==1||y-x==1){return 0;}

     while(1>0)
     {
        if(win_pos(y%x,x)==0){return 1;}
        if(win_pos(((y%x)+x),x)==0){return 1;}
        return 0;
     }

}
int main()
{

   // cout<<win_pos(5,8);
   ifstream file("in.in");
   ofstream out("out.out");
   string str;
   vector<long> l;
   long r=0;
   long a1,a2,b1,b2;
   int t=1;
   while(getline(file,str,'\n'))
   {
       for(int k=0;k<str.length();k++)
       {   //cout<<"st "<<str[k]<<endl;
      // getch();
           if(str[k]==' ')
           {
              // cout<<r<<endl;
              // getch();
               l.push_back(r);
               r=0;
           }
           else
           {
               r=(10*r)+(static_cast<int>(str[k])-48);
              // cout<<"r="<<r<<endl;
               if(k==str.length()-1){l.push_back(r); r=0;}
           }
       }
       a1=l[0];
       a2=l[1];
       b1=l[2];
       b2=l[3];
       l.clear();
       int count=0;

        if(t==1){cout<<a1<<a2<<b1<<b2<<endl;}
       for(long i=a1;i<=a2;i++)
      {
        for(long j=b1;j<=b2;j++)
        {   cout<<i<<" "<<j<<endl;
           if(win_pos(i,j)==1)
           {

               count++;
           }
        }
      }
    out<<"Case #"<<t<<": "<<count<<endl;
    t++;
   }

}
