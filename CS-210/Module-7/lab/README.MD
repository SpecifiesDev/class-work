# Module-7 Lab

## The Problem
A linked list is built in this lab. Make sure to keep track of the head node.

(1) Define the class ContactNode per the following specifications:

Private data members
string contactName
string contactPhoneNumber
ContactNode* nextNodePtr
Constructor with parameters for name followed by phone number ()
Public member functions
GetName() - Accessor ()
GetPhoneNumber() - Accessor ()
InsertAfter() ()
GetNext() - Accessor ()
PrintContactNode()
## Example Output
If the input is: 
```Roxanne Hughes 443-555-2864 Juan Alberto Jr. 410-555-9385 Rachel Phillips 310-555-6610```



The program should output
```Person 1: Roxanne Hughes, 443-555-2864 Person 2: Juan Alberto Jr., 410-555-9385 Person 3: Rachel Phillips, 310-555-6610```

## The Solution
Use pointers to create a linked list that iterates towards next node in the list when called upon.