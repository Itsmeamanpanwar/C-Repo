#include<iostream> 
using namespace std; 

int main(){
  int num; 
  cout<<"Enter you age: ";
  cin>>num;
  cout<<num<<endl;

  string name; 
  cout<<"Enter you name: "; 
  cin>>name;
  cout<<name<<endl; 


  // cin.ignore(); 
  string full_name ;
  cout<<"Enter your full name: "; 
  getline(cin>>ws, full_name); 
  cout<<full_name<<endl;


  return 0; 
}

