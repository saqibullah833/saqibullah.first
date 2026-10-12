#include<iostream>
#include<math.h>
using namespace std;
int main(){
	//Type casting
	int a= 60;
	int b= 45;
	int c= a/b;	//if we cannot change such type of costing is known as implicit type costing.
	float d= (float)a/(float)b;     		/*when we change (int) to (float) to 
	this type of casting is known as explicit type casting*/
	cout<<c<<"\n";
	cout<<d;
}