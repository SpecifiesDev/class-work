#ifndef GROCERY_TRACKER_H
#define GROCERY_TRACKER_H

#include <iostream>
#include <fstream>
#include <map>
#include <string>


class GroceryTracker {

	private:
		std::map<std::string, int> itemStorage;
		std::string backupFilePath;
		std::string readFilePath;

	public:

		GroceryTracker(std::string backupPath, std::string readPath);

		void loadInputData();
		void printItemFrequency();
		void printHistogram();
		void saveDatabackup();

		int getItemFrequency(const std::string itemName) const;



};

#endif

