#include<iostream>
#include<string>

using namespace std;

int main()

{

int ip[4],i=0;
cout<<"Enter The IPv4 address";
for(i=0;i<4;i++)
{
cin>>ip[i];
}
cout<<"\n IPv4 ADDRESS:"<<ip[0];
cout<<"."<<ip[1]<<"."<<ip[2]<<"."<<ip[3]<<"\n";
cout<<"The IPv4 address is in Class: ";

if(ip[0]>=0 && ip[0]<=127)
cout<<"Class A";

if(ip[0]>127 && ip[0]<191)
cout<<"Class B";

if(ip[0]>191 && ip[0]<224)
cout<<"Class C";

if(ip[0]>224 && ip[0]<=239)
cout<<"Class D";

if(ip[0]>239)
cout<<"Class E";

return 1;

}
