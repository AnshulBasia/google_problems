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

    string a,b;
  ifstream file("in.in");
   ofstream out("out.out");
   string str;
   int t=0;
   int temp;
   while(getline(file,str,'\n'))
   {
       t++;

    for(int j=0;j<str.size();j++)
    {
        if(str[j]==' ')
        {
            temp=j;
            break;
        }
    }

    a=str.substr(0,temp);
    b=str.substr(temp+1);
    int k;
    int eq;
    int tempy;
    cout<<a<<" "<<b<<endl;
    //69? 9??
    for(int i=0;i<a.size();i++)
    {
        if(i==0)
        {
            if(a[i]=='?')
            {
                if(b[i]=='?')
                {
                    a[i]=b[i]='0';
                }
                else{a[i]=b[i];}
            }
            else
            {
                if(b[i]=='?'){b[i]=a[i];}
            }
        }
        else
        {
            k=0;

            while(a[k]==b[k])
            {
                k++;
            }
            if(k>=i){k=i-1;}

            if(a[k]==b[k]){eq=0;}
            if(a[k]>b[k]){eq=1;}
            if(a[k]<b[k]){eq=2;}

            if(a[i]=='?')
            {
                if(b[i]=='?')
                {
                    if(eq==0){a[i]='0';b[i]='0';}
                    if(eq==1){a[i]='0';b[i]='9';}
                    if(eq==2){a[i]='9';b[i]='0';}
                }
                else
                {
                    if(eq==0){a[i]=b[i];}
                    if(eq==1){a[i]='0';}
                    if(eq==2){a[i]='9';}
                }
            }
            else
            {
                if(b[i]=='?')
                {
                    if(eq==0){b[i]=a[i];}
                    if(eq==1){b[i]='9';}
                    if(eq==2){b[i]='0';}
                }
            }
        }

    }
        out<<"CASE #"<<t<<": ";


        out<<a<<" "<<b<<endl;

   }

}
