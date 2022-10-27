#include <iostream>;
#include <string>;
#include <fstream>;
using namespace std;

class LoginSystem {
  public:
  string username;
  string password;

  string returningUser;
  string returningPassword;

  
 
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
  cout << "Please enter in your username.\n"; cin >> returningUser;
  cout << "Please enter in yout password.\n"; cin >> returningPassword;

  ifstream fin;
  fin.open("data\\" + returningUser + ".txt");

  if (fin.fail()){
    cout << "Account does not exist. ";
  }
string testUSER, testPW;
  while (fin.eof()){
    std::getline(fin, testUSER);
    std::getline(fin, testPW);
  }

  if (testUSER == returningUser && testPW == returningPassword){
    std::cout << "this account exists" << std::endl;
  } else {
   std::cout << "this account doesnt exist" << std::endl;
  }
  return 0;
}


