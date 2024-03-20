#include <iostream>
#include <vector>
using namespace std;

void SortVector(vector<int>& myVec) {
   
   // declare a bool swapped to determine if a val was swapped over a pass
   bool swapped;
   
   do {
      // set swapped equal to false, this is how the loop will terminate once a val isn't swapped
      swapped = false;
      
      // declare i to unsigned
      unsigned int i;
      
      // loop over the vector
      
      for(i = 0; i < myVec.size() - 1; ++i) {
         
         // get the integer at index, as well as the next integer
         int atIndex = myVec.at(i);
         int nextIndex = myVec.at(i + 1);
         
         // compare them to determine if the next value is larger than the previous
         if(nextIndex > atIndex) {
            
            // perform the swap, set current index to the larger, and next index to the smaller
            myVec.at(i) = nextIndex;
            myVec.at(i + 1) = atIndex;
            
            // set swapped to true so that this code body is executed again.
            swapped = true;
            
            
         }
      
      }
      
      // just for fun, let's count the amount of iterations the algorithm takes to sort the vector
      // iterations++;
   } while(swapped);
   
   // no need to return anything as this is a void method
   // and we are using pass back referencing to manipulate the output.
     
}


int main() {
   
   // number to populate
   int numToPopulate;
   cin >> numToPopulate;
   
   
   // declare a new vector, with num to populate size
   vector<int> toSort(numToPopulate);
   
   int input;
   
   // loop amount of times for user input and populate vector
   for(int i = 0; i < numToPopulate; ++i) {
      cin >> input;
      toSort.at(i) = input;
   }
   
   // create an int to indicate our iterations, during submit we won't print 
   int iterations = 0;
   
   // perform algorithm on vector
   SortVector(toSort);
   
   // print the sorted vector
   for(unsigned int i = 0; i < toSort.size(); ++i) {
      cout << toSort.at(i) << ",";  
   }
   
   cout << endl;
   
   // would print iterations here
   // cout << " Algorithm took " << iterations << " iterations to sort the vector." << endl;
   // during my testing, this was the output:
   // 421,62,59,42,32,22,14,2, Algorithm took 5 iterations to sort the vector.

   return 0;
}