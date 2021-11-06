#include "UsedFurnitureItem.h"

double UsedFurnitureItem::CalculateCurrentPrice()
{
	double price{};
	if (condition == 'A') {
		if (age <= 7)
			price = (1-age*0.1)*brandNewPrice;
		else
			price = 0.3*brandNewPrice;
	}else if (condition == 'B') {
		if (age <= 5)
			price = (1 - age * 0.15) * brandNewPrice;
		else
			price = 0.2 * brandNewPrice;
	}else if (condition == 'C') {
			price = 0.1 * brandNewPrice;
	}

	return price;
}

double UsedFurnitureItem::CalculateShippingCost(int mileDistance)
{
	if( size < 1000 && weight < 20)
		return 1*mileDistance;
	else
		return 2 * mileDistance;
}


UsedFurnitureItem::UsedFurnitureItem() : age{ 1 }, brandNewPrice{ 10.00 },
description{ "Not available" }, condition{ 'A' },
size{ 1.0 }, weight{ 1.0 }
{
}

UsedFurnitureItem::UsedFurnitureItem(double age, double brandNewPrice, std::string description,
	char condition, double size, double weight)
{
	setAge(age);
	setBrandNewPrice(brandNewPrice);
	setDescription(description);
	setCondition(condition);
	setSize(size);
	setWeight(weight);
}


int UsedFurnitureItem::getAge() { return age; }
double UsedFurnitureItem::getBrandNewPrice() { return brandNewPrice; }
std::string UsedFurnitureItem::getDescription() { return description; }
char UsedFurnitureItem::getCondition() { return condition; }
double UsedFurnitureItem::getSize() { return size; }
double UsedFurnitureItem::getWeight() { return weight; }

void UsedFurnitureItem::setAge(int age)
{
	this->age = age;
}
void UsedFurnitureItem::setBrandNewPrice(double brandNewPrice)
{
	if (brandNewPrice >= 0)
		this->brandNewPrice = brandNewPrice;
}
void UsedFurnitureItem::setDescription(std::string description)
{
	this->description = description;
}
void UsedFurnitureItem::setCondition(char condition)
{
	if (condition == 'A' || condition == 'B' || condition == 'C')
		this->condition = condition;
}
void UsedFurnitureItem::setSize(double size)
{
	if (size >= 0)
		this->size = size;
}
void UsedFurnitureItem::setWeight(double weight)
{
	if (weight >= 0)
		this->weight = weight;
}

void UsedFurnitureItem::PrintInvoice(int distance) {
	cout << "getAge: " << getAge() << endl;
	cout << "getBrandNewPrice: " << getBrandNewPrice() << endl;
	cout << "getDescription: " << getDescription() << endl;
	cout << "getCondition: " << getCondition() << endl;
	cout << "getSize: " << getSize() << endl;
	cout << "getWeight: " << getWeight() << endl;
	cout << "currentPrice: " << CalculateCurrentPrice() << endl;
	cout << "shippingCost: " << CalculateShippingCost(distance) << endl;

}