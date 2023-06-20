#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>

#include "Item.h"

class FileReader
{
    private:

        const std::string _filename;

    public:

        FileReader(std::string filename): _filename(filename){};
        std::list<ItemPtr> readFile();
};