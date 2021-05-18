#include <iostream>
using namespace std;
int main(){
	int nofloor;
	int noroom;
	float sum=0;
	int noocc;
	float sumoc=0;
	double result ;
	
	cout <<" How many Floor the hotel have?\n ";
	cin>> nofloor;
	for (int i = 1; i<= nofloor; i++){
		cout << " How many rooms are on floor "<<i<<"=";
		cin>>noroom;
		cout<<"How many Room are occupied on floor"<<i<<"=";
		cin>>noocc;
		sum=sum+noroom;
		sumoc=sumoc+noocc;
	}
	
	cout <<"Total Number of Rooms= "<<sum<<endl;
	cout<<"Total Number of Rooms Occupied= "<<sumoc<<endl;
	result = ((sumoc/sum)*100);
	cout <<"Occupancy Percentage = "<<result<<endl;
	
	
	return 0;
}
	//Hotel Room Occupancy Program 
// C++ YAD AA GAI😂❤️
