#include <iostream>
#include <cmath>
using namespace std;

float quadratic(float a, float b, float c, float &x1, float &x2) 
{
    float dis;
    dis = b*b - 4*a*c; // calculate discriminant
    if (dis > 0)
    { // find distinct real solutions
        x1 = (-b + sqrt(dis)) / (2*a);
        x2 = (-b - sqrt(dis)) / (2*a);
    } 
    else if (dis == 0) 
    { // find repeated root
        x1 = (-b) / (2*a);
        x2 = x1;
    }
    else
    { // find Re and Im parts of the complex solutions
        x1 = (-b) / (2*a);
        x2 = sqrt(-dis) / (2*a);
    }
    return dis; // solutions have been returned by ref, discriminant gets returned by value
}

int main() {
    float a, b, c;
    float x1, x2, dis, rePart, imPart;

    cout << "For the differential equation ay'' + by' + c, enter the coefficients:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    dis = quadratic(a, b, c, x1, x2); // Calling of the function
    cout << "Discriminant: " << dis << endl;

    cout << "General solution: " << endl;
    if (dis > 0) // Case discriminant > 0 
    {
        cout << "y = Ae^(" << x1 << "x) + Be^(" << x2 << "x)";
    }
    else if (dis == 0) // Case discriminant = 0
    { 
        cout << "y = (A + Bx)e^(" << x1 << "x)";
    }
    else // Case discriminant < 0
    { 
        rePart = x1;
        imPart = x2;
        cout << "y = e^(" << rePart << "x)(Acos(" << imPart << "x) + Bcos(" << imPart << "x))";
    }
    cout << endl;

    return 0; 
}