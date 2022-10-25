#include <iostream>;
using namespace std;

class LoginSystem {
  public:
 
  int createNewUser();
  int returnExistingUser();
};

int LoginSystem::createNewUser(){
  cout << "NEW USER";

  return 0;
}

int LoginSystem::returnExistingUser(){
  cout << "EXISTING USER";

  return 0;
}


