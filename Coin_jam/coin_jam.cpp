
#include <iostream>
#include <math.h>
#include <stack>
#include <fstream>
using namespace std;
#include <string.h>
#include <vector>
#include <bitset>
#include <algorithm>
vector<int> primes;
bool check_if_prime_without(long long n)
{
    int root =sqrt(n);
    if(n==2||n==3||n==5||n==7)
    {
        return true;
    }
    if(n==4||n==6)
    {
        return false;
    }
    if(n%2==0||n%3==0)
    {
        return false;
    }
    int i=1;
    while(true)
    {
        if(((6*i)+1)>root)
        {
            break;
        }

        if(n%((6*i)+1)%n==0||n%((6*i)+5)==0)
        {return false;}
        i++;
    }
    return true;
}

long long get_divisior(long long n)
{

    for(int i=pow(n,.5);i>=3;i--)
    {
        if(n%i==0)
        {
            return i;
        }
    }
    return 0;
}
int q;
int main()
{
    //seive();


    ofstream answ("out.out");


    int t=0;

        t++;

        answ<<"Case #"<<t<<": "<<endl;


    int n=16;

    int pm=50;



    long long number=0;
    for(int i=0;i<=n-1;i++)
    {
        number+=pow(2,i);
    }
    int count=0;
    cout<<number<<endl;;

    int flag;

    for(long long i=number;i>=2;i--)
    {
        cout<<i<<endl;
        if(check_if_prime_without(i)){continue;}
        cout<<i<<endl;
        flag=1;
        bitset<33> strr(i);//convert i in binary, then in base j
        //cout<<strr[2]<<endl;
        //cout<<strr[32];
         //cout<<strr[0]<<"  "<<strr[n-1]<<endl;
        if(strr[0]!=1||strr[n-1]!=1){continue;}
       // cout<<strr<<endl;
        for(int j=3;j<=10;j++)
        {

            long long test=0;
            for(int k=0;k<n;k++)
            {
                test+=strr[k]*pow(j,k);
            }
           // cout<<j<<" j "<<test<<endl;
            if(check_if_prime_without(test)){flag=0;break;}
        }
        if(flag==0){continue;}
        else
        {
           count++;
           cout<<strr<<endl;
           string ans;
        for(int m=0;m<n;m++)
        {
            if(strr[m]==true){ans+='1';}
            else{ans+='0';}
        }
        cout<<ans<<endl;
        reverse(ans.begin(),ans.end());
        answ<<ans<<" ";
        for(int j=2;j<=10;j++)
        {

            long long test=0;
            for(int k=0;k<n;k++)
            {
                test+=strr[k]*pow(j,k);
            }
            cout<<"test="<<test<<endl;
            answ<<get_divisior(test)<<" ";

        }

       answ<<endl;
           if(count==pm){break;}
        }
    }


}

