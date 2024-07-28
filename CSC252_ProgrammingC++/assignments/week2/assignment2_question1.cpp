#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

class Soda {
    private:
    
        double radius;
        double height;

    public:
        Soda(double r, double h)
        {
            radius = r;
            height = h;
        }

        string getVolume()
        {
            stringstream ss;
            double volume = M_PI * radius * radius * height;
            ss << "Volume: " << volume;
            return ss.str();
        }

        string getSurfArea()
        {
            stringstream ss;
            double left_side = 2 * M_PI * radius * height;
            double right_side = 2 * M_PI * radius * radius;
            double surface_area = left_side + right_side;
            ss << "Surface Area:" << surface_area;
            return ss.str();
        }
};

int main ()
{
    Soda pepsi = Soda(3, 9);
    cout << pepsi.getVolume() << endl;
    cout << pepsi.getSurfArea() << endl;
    return 0;
}