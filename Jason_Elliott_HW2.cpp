#include <iostream>
using namespace std;

int main()
{

	//Menu List
	cout << "Haverly's Room : " << endl;
	cout << "1. Square Room " << endl;
	cout << "2. Rectangle Room " << endl;
	cout << "3. Round Room " << endl;
	cout << "4. Quit " << endl;

	int menu_item;

	double width;
	double length;
	double radius;


	cout << "Please enter a menu item (1-4)" << endl;
	cin >> menu_item;

		if (menu_item == 1)
	{
		double area_1;
		cout << "Square Room " << endl;
		cout << "Enter the width of the room: ";
		cin >> width;
		area_1 = width * width;
		cout << "\n"; cout << "Area of Room: " << area_1 << " sq/ft" << endl;
	}
		else if (menu_item == 2)
	{
		double area_2;
		cout << "Rectangle Room " << endl;
		cout << "Enter the width of the room: ";
		cin >> width;
		cout << "Enter the length of the room: ";
		cin >> length;
		area_2 = width * length;
		cout << "\n"; cout << "Area of Room: " << area_2 << " sq/ft" << endl;
	}
		else if (menu_item == 3)
	{
		double area_3;
		cout << "Round Room " << endl;
		cout << "Enter the radius of the room: ";
		cin >> radius;
		area_3 = 3.14*radius*radius;
		cout << "\n"; cout << "Area of Room:" << area_3 << " sq/ft" << endl;
	}
		else if (menu_item == 4)
	{
		cout << "Thank you for using Haverlyl's Room Calculator" << endl;
	}

		else
		cout << "Invalid menu item" << endl;


	return 0;
}