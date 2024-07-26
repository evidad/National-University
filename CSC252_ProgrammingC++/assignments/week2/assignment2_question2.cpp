#include <iostream>
#include <sstream>
using namespace std;

class Microwave {

    private:
        int time;
        int pwrLvl;

    public:
        Microwave()
        {
            reset_microwave();
        }
    
        void reset_microwave()
            {
                time = 0;
                pwrLvl = 1;
            }

        void add_time()
            {
                time = time + 30;
            }

        void switch_pwrLvl()
            {
                if (pwrLvl == 1)
                {
                    pwrLvl = 2;
                }
                else
                {
                    pwrLvl = 1;
                }
            }

        string start_microwave()
        {
            stringstream ss;
            ss << "Cooking for: " << time << " seconds at level " << pwrLvl << endl;
            return ss.str();
        }
};

int main()
{
    Microwave microwave1 = Microwave();
    microwave1.add_time();
    microwave1.add_time();
    microwave1.switch_pwrLvl();
    microwave1.reset_microwave();
    
    Microwave microwave2 = Microwave();
    microwave2.add_time();

    Microwave microwave3 = Microwave();
    microwave3.add_time();
    microwave3.add_time();
    microwave3.add_time();
    microwave3.switch_pwrLvl();

    cout << microwave1.start_microwave() << endl;
    cout << microwave2.start_microwave() << endl;
    cout << microwave3.start_microwave() << endl;

    return 0;
}