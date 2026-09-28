#include<iostream> 
using namespace std; 

// typedef std::vector<std::pair<std::string, int >> pairlist_t; 
//this is a data type to create pair of list 
typedef std::string text_t;
typedef double d; 
int main(){
  /*Instead of writing whole 'std::vector<std::pair<std::string, int >>' 
    we will simply use 'pairlist_t' as a keyword*/ 

  text_t name = "Aman";
  d num = 12139123.123;  
  cout<<name<<endl;
  cout<<num<<endl;
   
  return 0;
}