#include <iostream>
#include <string>
using namespace std;

int main() {

   bool running = true;
   
   string input;
   int numItems;
   
   while(running) {
      cin >> input;
      
      if(input == "quit") {
        running = false;  
      } else {
        cin >> numItems;
        cout << "Eating " << numItems << " " << input << " a day keeps you happy and healthy." << endl;
      }
   }

   return 0;
}