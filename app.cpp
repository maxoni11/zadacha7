#include <iostream>
#include <string>
#include "Appliance.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    Refrigerator fridge("Супер Холодильник ", "Инструкция пользования Супер Холодильника");

    fridge.turnOn();
    fridge.setTemperature(3);
    fridge.switchMode("экономичный");
    fridge.setWater(true);
    fridge.setIce(true);

    cout << "Текущий статус " << fridge.getName() << ":" << endl;
    cout << "1) температура: " << fridge.getTemperature() << " градусов/-a" << endl;
    cout << "2) режим: " << fridge.getMode() << endl;
    cout << "3) вода: " << (fridge.getWater() ? "Есть" : "Нет") << endl;
    cout << "4) лёд: " << (fridge.getIce() ? "Есть" : "Нет") << endl;

    fridge.turnOff();

    return 0;
}