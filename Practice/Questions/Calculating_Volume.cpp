#include <iostream>
using namespace std;

class Volume
{
public:
    float calVolume(float radius)
    {
        return (4.0 / 3.0) * 3.14159 * radius * radius * radius;
    }

    float calVolume(float length, float width, float height)
    {
        return length * width * height;
    }

    float calVolume(float radius, float height)
    {
        return 3.14159 * radius * radius * height;
    }
};

int main()
{
    Volume Anything;
    int choice;
    float radius, length, width, height;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Calculate Volume of Sphere\n";
        cout << "2. Calculate Volume of Cuboid\n";
        cout << "3. Calculate Volume of Cylinder\n";
        cout << "4. Exit\n\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the radius of the sphere: ";
            cin >> radius;
            cout << "Volume of the sphere: " << Anything.calVolume(radius) << endl;
            break;

        case 2:
            cout << "Enter the length of the cuboid: ";
            cin >> length;
            cout << "Enter the width of the cuboid: ";
            cin >> width;
            cout << "Enter the height of the cuboid: ";
            cin >> height;
            cout << "Volume of the cuboid: " << Anything.calVolume(length, width, height) << endl;
            break;

        case 3:
            cout << "Enter the radius of the base of the cylinder: ";
            cin >> radius;
            cout << "Enter the height of the cylinder: ";
            cin >> height;
            cout << "Volume of the cylinder: " << Anything.calVolume(radius, height) << endl;
            break;

        case 4:
            cout << "Exiting program. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }

    } while (choice != 4);
    return 0;
}