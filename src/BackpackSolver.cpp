#include "../include/BackpackSolver.h"


void BackpackSolver::display()
{
    for(const ItemPtr& item : _items)
    {
        std::cout << item->getValue() << " , " << item->getVolume() << std::endl;
    }
}