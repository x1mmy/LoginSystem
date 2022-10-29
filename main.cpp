#include <iostream>;
using namespace std;

#include "Login.h";

int main(){
  bool status; 
  LoginSystem LS;
  int choice; 
  std::cout<< "Please select an option.\n 1. Create a new account \n 2. Login with an existing account \n";
  std::cin >> choice;

  if (choice == 1){
    LS.createNewUser();    
  } else if (choice == 2){
    LS.returnExistingUser();
  }
  
} 
