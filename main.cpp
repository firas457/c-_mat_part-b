
      #include <iostream>
#include <string>
#include <vector>
#include "mat.cpp"
#include "mat.hpp"

using namespace std;
using namespace ariel;

int main(){
             std::string s= ariel::mat(27,37 , '@', '-');
             std::cout << "  " << endl;
             std::cout << s <<endl;


std::cout << "/n" << endl << endl << endl;

             std::string b= ariel::mat(7,3 , '@', '^');
             std::cout << "  " << endl; 
             std::cout << b <<endl;

std::cout << "/n" << endl << endl << endl;

             std::string d= ariel::mat(3,5 , '@', '%');
             std::cout << "  " << endl; 
             std::cout << d <<endl;


std::cout << "/n" << endl << endl << endl;


             std::string e= ariel::mat(3,3 , '@', '%');
             std::cout << "  " << endl; 
             std::cout << e <<endl;


std::cout << "/n" << endl << endl << endl;



             std::string f= ariel::mat(9,7 , '@', '-');
             std::cout << "  " << endl;
             std::cout << f <<endl;


std::cout << "/n" << endl << endl << endl;


         }
   


        
    