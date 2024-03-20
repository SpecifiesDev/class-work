# Module-1 Lab

## The Problem
Driving is expensive. Write a program with a car's gas milage (miles/gallon) and the cost of gas (dollars/gallon) as floating-point input, and output the gas cost for 20 miles, 75 miles, and 500 miles.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

## Example Output
If the input is: 
```
20.0 3.1599```

The program should output
```3.16 11.85 79.00
``` 
as cost per gallon for each mileage indicator.

## The Solution
Use floating-point division to calculate the values of each indicator. Use io manipulation library to set the precision of the output to two fixed decimal places.