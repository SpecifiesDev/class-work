#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {

   // intialize our input variables
   double MPG;
   double CPG;
   
   cin >> MPG;
   cin >> CPG;
   
   // Calculate costs for each mileage. 20, 75, and 500. Using floating point division.
   double cost_20 = (20 / MPG) * CPG;
   double cost_75 = (75 / MPG) * CPG;
   double cost_500 = (500 / MPG) * CPG;
   
   // set the cout format to 2 decimals 
   cout << fixed << setprecision(2);
   
   // print the calculated costs
   cout << cost_20 << " " << cost_75 << " " << cost_500 << endl;
   

   return 0;
}
