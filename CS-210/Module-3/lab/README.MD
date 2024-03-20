# Module-3 Lab

## The Problem
Define a function named SortVector that takes a vector of integers as a parameter. Function SortVector() modifies the vector parameter by sorting the elements in descending order (highest to lowest). Then write a main program that reads a list of integers from input, stores the integers in a vector, calls SortVector(), and outputs the sorted vector. The first input integer indicates how many numbers are in the list.

## Example Output
If the input is: 
```5 10 4 39 12 2```



The program should output
```39,12,10,4,2,```

## The Solution
Write a loop that will use bubble-sorting to sort the input vector. Bubble-sorting works by iterating over a list of objects until a swap is no longer made during a pass, terminating the loop.