#include <iostream >
using namespace std;
main(){
int Arr[5];


for (int i=0 ; i<5 ;i++)

{
cout <<"Salary of "<<i+1<<" is : ";
cin>>Arr[i];
}

//-----------------------------------
cout <<endl;
for (int u=0 ; u<5 ; u++)
{
if (Arr[u]%10==0)
{
//	for (int j=0 ; j<5 ; j++)
//	int Arr[j]=Arr[i];
cout <<"Lucky peoples are : "<<Arr[u];
cout <<endl;
}
}
//-----------------------------------
cout <<endl<<endl;
for (int v=0 ; v<5 ; v++)
{
if (!(Arr[v]%10==0))
{
//	for (int k=0 ; k<5 ; k++)
//	int Arr[k]=Arr[i];
cout <<"Unlucky peoples are : "<<Arr[v];
cout <<endl;
}}
//------------------------------------

return 0;
}
