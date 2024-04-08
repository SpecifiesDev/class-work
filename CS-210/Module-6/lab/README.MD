# Module-6 Lab

## The Problem
The given program reads a list of single-word first names and ages (ending with -1), and outputs that list with the age incremented. The program fails and throws an exception if the second input on a line is a string rather than an int. At FIXME in the code, add a try/catch statement to catch ios_base::failure, and output 0 for the age.
## Example Output
If the input is: 
```Lee 19 Lua 22 Mary t Stu 34```



The program should output
```Lee 20 Lua 23 Mary 0 Stu 35```

## The Solution
Ensure we are catching the failbit properly in order to set the age to -1 for the purpose of cout.