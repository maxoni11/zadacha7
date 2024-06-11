#pragma once
#include "Appliance.h"
#include<iostream>
#include<string>
using namespace std;

class Refrigerator : public Appliance {
private:
    int temperature;
    string mode;
    bool has_water;
    bool has_ice;

public:
    Refrigerator(string n, string m) : Appliance(n, m), temperature(5), mode("нормальный"), has_water(false), has_ice(false) {}

    void setTemperature(int temp) {
        temperature = temp;
        cout << "Температура поставлена на " << temperature << " градусов" << endl;
    }

    void switchMode(string newMode) {
        if (newMode == "нормальный" || newMode == "экономичный") {
            mode = newMode;
            cout << "Режим изменён на " << mode << endl;
        }
        else {
            cout << "Выберете нормальный или экономичный." << endl;
        }
    }

    void setWater(bool water) {
        has_water = water;
        cout << "Наличие воды: " << (has_water ? "Да" : "Нет") << endl;
    }

    void setIce(bool ice) {
        has_ice = ice;
        cout << "Наличие льда: " << (has_ice ? "Да" : "Нет") << endl;
    }

    int getTemperature() const {
        return temperature;
    }

    string getMode() const {
        return mode;
    }

    bool getWater() const {
        return has_water;
    }

    bool getIce() const {
        return has_ice;
    }
};
