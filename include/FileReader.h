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

    public:

        FileReader(std::string filename): _filename(filename){};
        std::vector<std::vector<int>> readFile();
};