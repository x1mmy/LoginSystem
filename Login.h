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
  fout.open( username + ".txt" );

  fout << username << endl << password;

  fout.close();

  return 0;
}

int LoginSystem::returnExistingUser(){
  //User enters details
  cout << "Please enter in your username.\n"; cin >> returningUser;
  cout << "Please enter in your password.\n"; cin >> returningPassword;

  //opens file of user
  ifstream fin;
  fin.open( returningUser + ".txt");

  //reads the values inside of the file
  string testUSER, testPW;
  while (!fin.eof()){
    std::getline(fin, testUSER);
    std::getline(fin, testPW);
  }

  //comapares the values inside file against user input 
  if ( returningUser == testUSER && returningPassword == testPW ){
    std::cout << "this account exists" << std::endl;
  } else {
    std::cout << "this account doesnt exist" << std::endl;
  }
  return 0;
}


