#pragma once
#include <iostream>
#include "Gun.h"
class Solider
{
private:
    std::string _name;
    Gun *_ptr_gun; //指针

public:
    Solider(std::string name);
    ~Solider();
    void addBulletToGun(int num);
    void addGun(Gun *ptr_gun);
    bool fire();
};