#include <iostream> 
#include <cmath> 

using namespace std; 

int main(){
  double a; 
  double b; 
  double c; 

  cout<<"Enter side1: "; 
  cin>>a; 
  cout<<"Enter side2: "; 
  cin>>b;  

  c = sqrt((pow(a,2) + pow(b,2)));

  cout<<"Hypothenuese: "<<c<<endl; 
  return 0;
}