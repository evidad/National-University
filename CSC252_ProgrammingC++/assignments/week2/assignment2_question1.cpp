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

        string get_volume()
        {
            stringstream ss;
            double volume = M_PI * radius * radius * height;
            ss << "Volume: " << volume;
            return ss.str();
        }

        string get_surfArea()
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
    cout << pepsi.get_volume() << endl;
    cout << pepsi.get_surfArea() << endl;
    return 0;
}