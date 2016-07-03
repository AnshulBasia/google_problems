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
int d,i,m,n;
int cost(vector<int> pixels,int start, int &price)
{   //getch();
    cout<<"in"<<endl;
    int diff=pixels[start+1]-pixels[start];
    cout<<"start="<<start<<" cost="<<price<<endl;
    if(n-start==1)
    {   cout<<"end"<<endl;
        return 0;
    }
    int flag=price;
    if(abs(diff)<=m)
    {   cout<<"1"<<endl;
        price+=cost(pixels,start+1,price);
        return price;
    }

    else
    {
        //DELETE START
        cout<<"2 "<<start;
        int temp1,temp2,temp3,temp4,temp;
        if(start==0)
        {
            temp1=cost(pixels,start+1,price)+d;
        }
        else
        {
            temp=pixels[start];
            pixels[start]=pixels[start-1];
            temp1=cost(pixels,start+1,price)+d;
            pixels[start]=temp;

        }
        cout<<"temp1 "<<temp1<<endl;
        price=flag;
        if(m!=0){
        temp2=(abs(diff/m)*i)+cost(pixels,start+1,price);
        price=flag;
        temp=pixels[start];
        pixels[start]-=diff-m;
        cout<<"temp2 "<<temp2<<endl;}
        temp3=abs(diff)-m+cost(pixels,start+1,price);
        price=flag;
        pixels[start]=temp;
        pixels[start+1]+=diff-m;

        temp4=abs(diff)-m+cost(pixels,start+1,price);
        cout<<"temp4 "<<temp4<<endl;
        price=flag;
        cout<<min(min(temp1,temp2),min(temp3,temp4))<<endl;
        return min(min(temp1,temp2),min(temp3,temp4));
    }

}

int main()
{
    vector<int> pixels;
    int j;
    cin>>d>>i>>m>>n;
    for(int i=0;i<n;i++)
    {
        cin>>j;
        pixels.push_back(j);
    }
   int price=0;
   cout<<cost(pixels,0,price);
}
