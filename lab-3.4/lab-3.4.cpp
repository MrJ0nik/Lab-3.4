#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y; 
    double R1, R2; 

    // Введення даних
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;

    // Обчислення відстані до початку координат
    double D = sqrt(x * x + y * y);

    if ((D > R1 && D <= R2) && ((x >= 0 && y >= 0) || (x <= 0 && y <= 0))) 
        cout << "yes" << endl;
    
    else 
        cout << "no" << endl;
    
    cin.get();
    return 0;
}
