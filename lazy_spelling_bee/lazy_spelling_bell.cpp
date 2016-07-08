#include<iostream>
#include<fstream>
using namespace std;

int main()
{

   ifstream file("lazy_spelling_bell_large.in");
   ofstream out("lazy_spelling_bell_large.out");
   string s;
   int t=1;
   while(getline(file,s,'\n'))
   {

    long long ans=1;
    cout<<s<<endl;
    cout<<endl;
    for (int i=0;i<s.length();i++)
    {

        if(s.length()==1){break;}
        if(i==0)
        {
            if(s[i]==s[i+1])
            {
                ans*=1;
            }
            else
            {
                ans*=2;
            }
            continue;
        }
        if(i==s.length()-1)
        {
            if(s[i]==s[i-1])
            {
                ans*=1;
            }
            else
            {
                ans*=2;
            }
            continue;
        }
        if(s[i]==s[i-1]&&s[i]==s[i+1])
        {
            ans*=1;
        }
        else
        {
            if(s[i]==s[i-1]||s[i]==s[i+1]||s[i-1]==s[i+1])
            {
                ans*=2;
            }
            else
            {
                ans*=3;
            }
        }
        if(ans%1000000007!=0){ans=ans%1000000007;}


    }
    ans=ans%1000000007;
    cout<<ans<<endl<<endl;
    out<<"Case #"<<t<<": "<<ans<<endl;
    t++;
    if(t>100){break;}
   }

}



