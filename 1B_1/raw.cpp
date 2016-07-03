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

string remove(string s,string c)
{
    for(int i=0;i<c.length();i++)
    {   char q=c[i];
        int pos=s.find(q);
   // cout<<pos<<endl;
    s= s.substr(0,pos) + s.substr(pos+1) ;


    }
    return s;
}


int main()
{
    //string s="hey";
    //if (s.find('h') != string::npos) {
         //   cout<<"yo";
//.. found.
 string y="as";
 cout<<y[0];
    ifstream file("in.in");
   ofstream out("out.out");


    string s;
    int t=0;
    while(getline(file,s,'\n'))
   {    t++;

    vector <int> ans;
    while(s.find('X')!=string::npos){
    if(s.find('X')!=string::npos)
    {
        s=remove(s,"SIX");
        ans.push_back(6);
    }
    }
    while(s.find('G')!=string::npos){
    if(s.find('G')!=string::npos)
    {
        s=remove(s,"EIGHT");
        ans.push_back(8);
    }}
    while(s.find('W')!=string::npos){
    if(s.find('W')!=string::npos)
    {
        s=remove(s,"TWO");
        ans.push_back(2);
    }}
    while(s.find('Z')!=string::npos){
    if(s.find('Z')!=string::npos)
    {
        s=remove(s,"ZERO");
        ans.push_back(0);
    }}
    while(s.find('U')!=string::npos){
    if(s.find('U')!=string::npos)
    {
        s=remove(s,"FOUR");
        ans.push_back(4);
    }}
    while(s.find('H')!=string::npos){
    if(s.find('H')!=string::npos)
    {
        s=remove(s,"THREE");
        ans.push_back(3);
    }}
    while(s.find('O')!=string::npos){
    if(s.find('O')!=string::npos)
    {
        s=remove(s,"ONE");
        ans.push_back(1);
    }}
    while(s.find('F')!=string::npos){
    if(s.find('F')!=string::npos)
    {
        s=remove(s,"FIVE");
        ans.push_back(5);
    }}
    while(s.find('S')!=string::npos){
    if(s.find('S')!=string::npos)
    {
        s=remove(s,"SEVEN");
        ans.push_back(7);
    }}
    while(s.find('N')!=string::npos){
    if(s.find('N')!=string::npos)
    {
        s=remove(s,"NINE");
        ans.push_back(9);
    }}

    sort(ans.begin(), ans.end() );
    out<<"CASE #"<<t<<": ";
    for(int j=0;j<ans.size();j++)
    {
        out<<ans[j];
    }
    out<<endl;


    ans.clear();
   }



}
