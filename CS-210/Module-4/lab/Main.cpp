#include <iostream>

using namespace std;

#include "ItemToPurchase.h"

void ConstructItem(ItemToPurchase& item, string itemTitle) {


	// intialize variables to receive user input
	string itemName;
	int itemPrice;
	int itemQuantity;

	cout << itemTitle << endl;

	cout << "Enter the item name:" << endl;
	getline(cin, itemName);
	item.SetName(itemName);

	cout << "Enter the item price:" << endl;
	cin >> itemPrice;
	item.SetPrice(itemPrice);

	cout << "Enter the item quantity:" << endl;
	cin >> itemQuantity;
	item.SetQuantity(itemQuantity);

	cout << endl;

	cin.ignore(); // clears the new line character in the cin buffer
}

void PrintItems(ItemToPurchase& const item1, ItemToPurchase& const item2) {
	cout << "TOTAL COST" << endl;;

	int item_one_cost = item1.GetPrice() * item1.GetQuantity();
	int item_two_cost = item2.GetPrice() * item2.GetQuantity();
	int total = item_one_cost + item_two_cost;

	cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << to_string(item_one_cost) << endl;

	cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << to_string(item_two_cost) << endl;

	cout << "\nTotal: $" << to_string(total) << endl;
}

int main() {

	// intialize variables to receive user input
	string itemName;
	int itemPrice;
	int itemQuantity;

	// initialize our class variables
	ItemToPurchase item1;
	ItemToPurchase item2;

	// construct both items
	ConstructItem(item1, "Item 1");
	ConstructItem(item2, "Item 2");

	// print the output

	PrintItems(item1, item2);





	return 0;
}