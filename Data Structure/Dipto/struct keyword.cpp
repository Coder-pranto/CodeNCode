//*Structure members can be initialized with declaration in C++. For Example the following  C++ program Executes Successfully without throwing any Error.

// In C++ We can Initialize the Variables with Declaration in Structure.

#include <iostream>
using namespace std;

struct Point {
	int x = 0; // It is Considered as Default Arguments and no Error is Raised
	int y = 1;
};

int main()
{
	struct Point p1;

	// Accessing members of point p1
	// No value is Initialized then the default value is considered. ie x=0 and y=1;
	cout << "x = " << p1.x << ", y = " << p1.y<<endl;

	// Initializing the value of y = 20;
	p1.y = 20;
	cout << "x = " << p1.x << ", y = " << p1.y;


    //*Structure members can be initialized using curly braces ‘{}’

     Point px = {23,44};
    cout << "x = " << px.x << ", y = " << px.y<<endl;


    //* Create an array of structures
    struct Point arr[10];

    // Access array members
    arr[0].x = 10;
    arr[0].y = 20;

    arr[1] = {333, 999};

    cout << arr[0].x << " " << arr[0].y<<endl;
    cout << arr[1].x << " " << arr[1].y<<endl;


    //* Structure pointer

    struct Point pz = { 1111, 2229 };

    // py is a pointer to structure pz
    struct Point* py = &pz;

    // Accessing structure members using structure pointer
    cout << py->x << " " << py->y;

	return 0;
}
