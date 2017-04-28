// Class-ObjectEnglishMeasurement.cpp : Defines the entry point for the console application.
//

#include <iostream>
class Distance // English distance class
{
private:
	int feet;
	double inches;
public:
	void setDistance(int feet_, double inches_) // set Distance to arguments
	{
		feet = feet_;
		inches = inches_;
	}
	void getDistance() // get lenght from user
	{
		std::cout << "Enter Feet: ";
		std::cin >> feet;
		std::cout << "Enter Inches: ";
		std::cin >> inches;
	}
	void showDistance() //display distance
	{
		std::cout << feet << "\' - " << inches << "\"";
	}
};

int main()
{
	Distance Distance1, Distance2; //define two lenghts

	Distance1.setDistance(11, 6.25); // set Distance1
	Distance2.getDistance(); // get Distance2 from user

	// Display lenghts
	std::cout << "Distance 1 = "; 
	Distance1.showDistance();
	std::cout << std::endl;
	std::cout << "Distance 2 = ";
	Distance2.showDistance();
	std::cout << std::endl;


	system("pause");
    return 0;
}

