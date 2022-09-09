#include<iostream>
using namespace std;
int main(){
	const float phi= 3.14;
	float L,r;
	
	cout<<"masukan jari-jari lingkaran :";
	cin>>r;
	
	cout<<"luas :";
	L=phi*r*r;
	
	cout<<"diketahui lingkaran dengan = "<<endl;
	cout<<"phi\t\t = "<<phi<<endl;
	cout<<"r\t\t = "<<r<<endl;
	
	cout<<"luas lingkaran dengan jari-jari ";
	cout<<r<<"cm\n";
	cout<<"adalah\n" ;
	cout<<L<<"\n";
	
	return 0;
}
