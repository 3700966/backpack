#pragma once

#include <list>
#include <iostream>

#include "Item.h"


class BackpackSolver
{

    private:

        std::list<ItemPtr> _items;

    public:

        BackpackSolver(std::list<ItemPtr> items): _items(std::move(items)){};

        void display();
};