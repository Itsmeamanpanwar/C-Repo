#include <iostream> 
#include <cmath>

using namespace std; 
int main(){
  double x = 3; 
  double y = 4; 
  double z; 

  z = max(x,y); 
  cout<<z<<endl;

  z = min(x,y); 
  cout<<z<<endl;

  int a = pow(x,y); 
  cout<<a<<endl;

  double c = sqrt(y); 
  cout<<c<<endl;

  z = abs(-3);
  cout<<z<<endl;

  float num = 13.50; 
  a = round(num); 
  cout<<a<<endl;

  float num1 = 12.49; 
  a = ceil(num1); 
  cout<<a<<endl;

  float num2 = 12.49; 
  a = floor(num2); 
  cout<<a<<endl;
  
  return 0; 
}