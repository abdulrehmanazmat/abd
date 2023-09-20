#include<iostream>
using namespace std;
class Car{
	public:
		
    string carname;
    string Model;
    int year;
    
    Car(string cn,string m,int y){
    	carname=cn;
    	Model=m;
    	year=y;
	}
};
int main(){
	Car carobj1("Toyata","y6",2015);
	Car carobj2("Civic","X4",2019);
	cout<<carobj1.carname<<" "<<carobj1.Model<<" "<<carobj1.year<<endl;
	cout<<carobj2.carname<<" "<<carobj2.Model<<" "<<carobj2.year<<endl;
	return 0;
	
}
