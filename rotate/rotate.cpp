#include <iostream>
#include <math.h>
#include <stack>
#include <fstream>
using namespace std;
#include <string.h>
#include <vector>

#include <algorithm>

bool check(char mat[50[50],int k,int n,char c)
{
    if(k>n){return false;}
    int count;
    for(int j=0;j<n;j++)
    {   count=0;
        for(int i=n-1;i>=0;i--)
        {
            if(mat[i][j]==c)
            {
                count++;
            }
            else
            {
                count=0;
            }
            if(count>=k){return true;}
        }
    }

     for(int j=n-1;j>=0;j--)
    {   int count=0;
        for(int i=0;i<n;i++)
        {
            if(mat[j][i]==c)
            {
                count++;
            }
            else
            {
                count=0;
            }
            if(count>=k){return true;}
        }
    }
    int j=0;
    for(int l=k-1;l<n;l++){

    for(int i=l-1;i>=0;i--)
    {
        if(mat[i][j]==c)
            {
                count++;
            }
            else
            {
                count=0;
            }
            j++;
            if(count>=k){return true;}
    }
    }
}
int main()
{
    int t;
    int n,k;
    char board[50][50];


    char rotated[50][50];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           rotated[i][j]=board[n-j-1][i];
        }
    }
    int dots;
    char gravity[50][50];
    int m=n-1;
    int n=0;
    for(int j=0;j<n;j++)
    {
        for(int i=n-1;i>=0;i--)
        {
            if(rotated[i][j]!='.')
            {
                gravity[m][n]=rotated[i][j];
                m--;
            }
        }
        for(int i=m;i>=0;i--)
        {
            gravity[m][n]='.';
        }
        n++;
    }
    m=0;
    n=0;



}
