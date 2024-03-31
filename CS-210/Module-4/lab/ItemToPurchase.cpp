#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

// construct our priv variables to lab specifications
ItemToPurchase::ItemToPurchase() {
	this->itemName = "none";
	this->itemPrice = 0;
	this->itemQuantity = 0;
}

// setter methods to manipulate internal class data
void ItemToPurchase::SetName(string name) {
	this->itemName = name;
}

void ItemToPurchase::SetPrice(int price) {
	this->itemPrice = price;
}

void ItemToPurchase::SetQuantity(int quant) {
	this->itemQuantity = quant;
}

// getters to get internal class data
string ItemToPurchase::GetName() {
	return this->itemName;
}

int ItemToPurchase::GetPrice() {
	return this->itemPrice;
}

int ItemToPurchase::GetQuantity() {
	return this->itemQuantity;
}

