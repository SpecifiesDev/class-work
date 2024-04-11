#include <iostream>

#include<string>

#include<limits>

using namespace std;

class ContactNode {
    public:
    // public member functions and data

    // construct class
    ContactNode(string name, string phoneNumber) {
        this->contactName = name;
        this->contactNumber = phoneNumber;

        // set next node to a null pointer on init
        this->nextNodePointer = nullptr;

    }

    // method to return name
    string GetName() {
        return this->contactName;
    }

    // method to return phone number
    string GetPhoneNumber() {
        return this->contactNumber;
    }

    // return a pointer to the next node
    ContactNode* GetNext() {
        return this->nextNodePointer;
    }

    // set the next contact node to our next node pointer
    // declaring what to insert next
    void InsertAfter(ContactNode* nextInsertNode) {
        if (nextInsertNode != nullptr) {
            nextInsertNode->nextNodePointer = this->nextNodePointer; // point the new node to the current node's next
            this->nextNodePointer = nextInsertNode; // point the current node to the new node
        }
    }

    // method to print the info of a contact
    void PrintContactNode() {
        cout << "Name: " << this->contactName << endl;
        cout << "Phone number: " << this->contactNumber << endl;
    }

    private:
        // private data members outside objects should not have access to
    string contactName;
    string contactNumber;
    ContactNode * nextNodePointer;

};

/* Define member functions here */

int main() {
    // create a pointer to keep track of the head node
    ContactNode* headNode = nullptr;

    // create a pointer to keep track of the tail node
    ContactNode* tailNode = nullptr;

    // store our init values to take input
    string name, phoneNumber;

    // begin input process
    getline(cin, name);
    cin >> phoneNumber;
    cin.ignore(numeric_limits <streamsize>::max(), '\n'); // clear input buffer
    headNode = new ContactNode(name, phoneNumber);

    getline(cin, name);
    cin >> phoneNumber;
    cin.ignore(numeric_limits <streamsize>::max(), '\n'); // clear input buffer
    // store our tail, to keep track of what needs to be inserted next
    tailNode = new ContactNode(name, phoneNumber);
    // use our headnode to insert tail node
    headNode->InsertAfter(tailNode);

    getline(cin, name);
    cin >> phoneNumber;
    tailNode = new ContactNode(name, phoneNumber);
    // we are essentially receiving the current pointer of the head, then
    // setting the next insert after to our tailnode
    headNode->GetNext()->InsertAfter(tailNode);

    // we are now at the end, so set our tail to our head so we can iterate
    tailNode = headNode;

    // while we have a pointer in the list, loop
    for (int i = 1; tailNode != nullptr; i++) {
        cout << "Person " << i << ": " << tailNode->GetName();
        cout << ", " << tailNode->GetPhoneNumber() << endl;
        tailNode = tailNode->GetNext();
    }

    // use our head node to print the contact list.
    cout << "\nCONTACT LIST" << endl;
    for (int i = 1; headNode != nullptr; i++) {
        headNode->PrintContactNode();
        headNode = headNode->GetNext();
        cout << endl;
    }

    return 0;
}