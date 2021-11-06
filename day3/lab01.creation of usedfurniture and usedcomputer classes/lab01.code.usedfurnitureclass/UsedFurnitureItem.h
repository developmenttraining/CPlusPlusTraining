#ifndef __USEDFURNITUREITEM_H
#define __USEDFURNITUREITEM_H

#include <iostream>

using namespace std;

class UsedFurnitureItem
{
private:
		int age; // age in years – default value for
		double brandNewPrice; // the original price of the item when it was brand new
		std::string description; // a string description of the item
		char condition; // condition of the item could be A, B, or C.
		double size; // the size of the item in cubic inches.
		double weight; // the weight of the item in pounds

		double CalculateCurrentPrice();
		double CalculateShippingCost(int mileDistance);
public:
	UsedFurnitureItem();
	UsedFurnitureItem(double age, double brandNewPrice,
		std::string description, char condition, double size, 
		double weight);
	
	int getAge();
	double getBrandNewPrice();
	std::string getDescription();
	char getCondition();
	double getSize();
	double getWeight();

	 void setAge(int);
	 void setBrandNewPrice(double);
	 void setDescription(std::string);
	 void setCondition(char);
	 void setSize(double);
	 void setWeight(double);

	 void PrintInvoice(int distance);
		
 
			
	
};

#endif // !__USEDFURNITUREITEM_H