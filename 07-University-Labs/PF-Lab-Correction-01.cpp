

//Corrected version
#include <iostream>
using namespace std;

int main() {
    int x, y, z, large;

 
    cout << "Input x, y, and z: ";
    cin >> x >> y >> z;

  
    large = x;

   
    if (y > large) {
        large = y;
    }

   
    if (z > large) {
        large = z;
    }

    // Display the largest number
    cout << "Largest of x, y, and z is: " << large << endl;

    return 0;
}
