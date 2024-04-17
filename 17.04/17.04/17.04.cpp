#include <iostream>
using namespace std;
#define MIN_TANK_VOLUME 20
#define MAX_TANK_VOLUME 120
class Tank
{
    const int VOLUME;
    double fuel_level;
public:
    const int getVOLUME()const
    {
        return VOLUME;
    }
    double getfule_level()const
    {
        return fuel_level;
    }
    Tank(int volume):VOLUME(volume)
    {
        if (volume < MIN_TANK_VOLUME)
        {
            volume = MIN_TANK_VOLUME;
        }
        if (volume > MAX_TANK_VOLUME)
        {
            volume = MAX_TANK_VOLUME;
        }
        this->fuel_level = 0;
        cout << "Tank is ready";
        //this->VOLUME = volume;
    }
    void fill(double ammount)
    {
        if (ammount < 0)
        {
            return;
        }
        if (fuel_level + ammount < VOLUME)
        {
            fuel_level += ammount;
        }
        else
        {
            fuel_level = VOLUME;
        }
    }
    double give_fuel(double ammount)
    {
        if (ammount < 0)
        {
            return fuel_level;
        }
        if (fuel_level - ammount > 0)
        {
            fuel_level - ammount;
        }
        else
        {
            fuel_level=0;
        }
        return fuel_level;
    }
    void info()const
    {
        cout << "Tank volume: " << VOLUME << "liters";
        cout << "Fuel level: " << fuel_level << "liters";
    }
};
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Hello World!\n";
    Tank tank(-40);
    tank.info;

}

