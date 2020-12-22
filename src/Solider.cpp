#include "../include/Solider.h"

Solider::Solider(std::string name)
{
    this->_name = name;
    this->_ptr_gun = nullptr;
}

void Solider::addBulletToGun(int num)
{
    this->_ptr_gun->addBullet(num);
}

void Solider::addGun(Gun *ptr_gun)
{
    this->_ptr_gun = ptr_gun;
}

bool Solider::fire()
{
    return (this->_ptr_gun->shoot());
}

Solider::~Solider()
{
    //释放指针
    if (this->_ptr_gun == nullptr)
        return;

    delete this->_ptr_gun;
    this->_ptr_gun = nullptr;
}