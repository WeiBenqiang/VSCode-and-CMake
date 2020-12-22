#include "include/Solider.h"
#include "include/Gun.h"

void test()
{
    Solider sanduo("xusansuo");
    sanduo.addGun(new Gun("Ak47"));
    sanduo.addBulletToGun(10);
    sanduo.fire();
}
int main()
{
    std::cout << "123123......" << std::endl;
    std::cout << "123123......" << std::endl;
    
    test();
    return 0;
}