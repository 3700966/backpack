#pragma once

#include <vector>
#include <iostream>



class BackpackSolver
{

    private:
        int _totalVolume;

        std::vector<int> _values;
        std::vector<int> _volumes;

    public:

        BackpackSolver(int totalVolume, std::vector<int> values, std::vector<int> volumes): _totalVolume(totalVolume), _values(std::move(values)), _volumes(std::move(volumes)){};
        void solve();
        void display();
};