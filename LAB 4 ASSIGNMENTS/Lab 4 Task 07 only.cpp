//Task 7(Assending & Decending )
#include<iostream>
using namespace std; 
int main ()
{
    int num[3];
    int i, j, desc,assc;

    cout<<"\n----------------------------\n Enter Three(3) Numbers : \n----------------------------\n";
    cout<<"";
    for (i = 0; i < 3; i++)
    cin>>num[i];
   
    for (i = 0; i < 3; i++)   //  'for' loop is used for sorting the numbers in descending order
    {	
        for (j = i + 1; j < 3; j++)
        {
            if (num[i] < num[j])
            {
                desc = num[i];
                num[i] = num[j];
                num[j] = desc;
            }
        }
    }
    cout<<"\n Numbers in Decending Order : \n--------------------------------"<<endl;
    for (i = 0; i < 3; i++)
    {
        cout<<" ";
        cout<<num[i];
        cout<<"\n";
    }
//....................................................................................................................
    cout<<"\n Numbers in Assending Order : \n--------------------------------"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(num[i]<num[j]){
				assc=num[i];
				num[i]=num[j];
				num[j]=assc;
			}			
		}
	}
	for(i=0;i<3;i++){
	cout<<" "<<num[i]<<endl;;
	}
	return 0;
}
