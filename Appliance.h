#pragma once
#include<iostream>
#include<string>
using namespace std;

class Appliance {
protected:
    string name;
    string manual;
    bool isOn;

public:
    Appliance(string n, string m) : name(n), manual(m), isOn(false) {}

    void turnOn() {
        isOn = true;
        cout << name << "Сейчас включён." << endl;
    }

    void turnOff() {
        isOn = false;
        cout << name << "Сейчас выключен." << endl;
    }

    bool getStatus() const {
        return isOn;
    }

    string getName() const {
        return name;
    }

    string getManual() const {
        return manual;
    }
};
