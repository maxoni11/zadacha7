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
    Refrigerator(string n, string m) : Appliance(n, m), temperature(5), mode("����������"), has_water(false), has_ice(false) {}

    void setTemperature(int temp) {
        temperature = temp;
        cout << "����������� ���������� �� " << temperature << " ��������" << endl;
    }

    void switchMode(string newMode) {
        if (newMode == "����������" || newMode == "�����������") {
            mode = newMode;
            cout << "����� ������ �� " << mode << endl;
        }
        else {
            cout << "�������� ���������� ��� �����������." << endl;
        }
    }

    void setWater(bool water) {
        has_water = water;
        cout << "������� ����: " << (has_water ? "��" : "���") << endl;
    }

    void setIce(bool ice) {
        has_ice = ice;
        cout << "������� ����: " << (has_ice ? "��" : "���") << endl;
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
