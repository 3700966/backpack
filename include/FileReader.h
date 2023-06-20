#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

class FileReader
{
    private:

        const std::string _filename;
        int _totalVolume;

    public:

        FileReader(std::string filename): _filename(filename){};
        std::vector<std::vector<int>> readFile();

        const int getTotalVolume() const {return _totalVolume;};
};