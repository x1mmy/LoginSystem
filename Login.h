#include <iostream>;
#include <string>;
#include <fstream>;
using namespace std;

class LoginSystem {
  public:
  string username;
  string password;
 
  int createNewUser();
  int returnExistingUser();
};

int LoginSystem::createNewUser(){
  std::cout << "Please enter your username.\n";
  cin >> username;
  std::cout << "Please enter in your password. \n";
  cin >> password;

  ofstream fout;
  fout.open("data\\" + username + ".txt" );

  fout << username << endl << password;

  fout.close();

  return 0;
}

int LoginSystem::returnExistingUser(){
  cout << "EXISTING USER";

  return 0;
}


