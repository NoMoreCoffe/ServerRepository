#include<iostream>
#include<cstdlib>
#include<string>

int main(){
const char* secret = std::getenv("PASSWORD");
std::string s(secret) ;
if (s = "qwerty"){
  std::cout << "Password is Correct!!!" << std::endl;
}
else{
  std::cout << "Password is INCORRECT!!!" << std::endl;
}
   return 0; 

}
