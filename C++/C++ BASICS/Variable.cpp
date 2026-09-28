#include<iostream> 
using namespace std; 
int main(){

  // Integer
  int a; //creating a variable with data container integer
  a = 21; //assigning a value
  int b = 20; //assigning an integer variable with a value
  cout<<"Value of a: "<<a<<endl;
  cout<<"Value of b: "<<b<<endl;
  a = 32; 
  b = 3.2; //Warning
  cout << "Update a: "<<a<<endl; 
  cout<< "Update b : "<<b<<endl; 

  // Double (number including decimal)
  // double a = 32.1123; //error
  double x = double(a); //correct way 
  cout << "Update x: "<<x<<endl; 
  double c = 231.24;
  cout<<"Value of a: "<<c<<endl;

  // CHAR (stores a single character);
  char A = 'A'; 
  char B = 'C'; 
  char Dollar = '$'; 

  //boolean(True or False)
  bool student = false; 
  bool teacher = true; 
  cout<<student<<" "<<teacher<<endl; 

  // strings (sequence of texts)
  string name = "Aman"; 
  string alph = "ABC";
  cout<<name<<"\n"<<alph<<endl;
  return 0;  
}