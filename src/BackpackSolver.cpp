#include "../include/BackpackSolver.h"

int max(int a, int b) { return (a > b) ? a : b; }

void BackpackSolver::display()
{
    for(int i = 0; i < _values.size(); i++ )
    {
        std::cout << _values[i] << " , " << _volumes[i] << std::endl;
    }
}

void BackpackSolver::solve()
{
    
    int numberOfItems = _values.size();

    int i, v;
    int matrix[numberOfItems + 1][_totalVolume + 1];
 
    // Build matrix 
    for (i = 0; i <= numberOfItems; i++) 
    {
        for (v = 0; v <= _totalVolume; v++) 
        {
            if (i == 0 || v == 0)
            {
                matrix[i][v] = 0;
            }
            else if (_volumes[i - 1] <= v)
            {
                matrix[i][v] = max(_values[i - 1] + matrix[i - 1][v - _volumes[i - 1]], matrix[i - 1][v]);
            }
            else
            {
                matrix[i][v] = matrix[i - 1][v];
            }
        }
    }
 
    // stores the value of the best possible choice
    int res = matrix[numberOfItems][_totalVolume];
    std::cout << "result is " << res << " obtained by choosing items : " << std::endl;
     
    v = _totalVolume;

    for (i = numberOfItems; i > 0 && res > 0; i--) 
    {
         
        if (res == matrix[i - 1][v])        // This item is not included
        {
            continue;
        }   
        else                                // This item is included.
        {  
            std::cout<<" volume "<<_volumes[i - 1] << " value " << _values[i - 1] << std::endl;

            // We deduce its value from the result and look for the next included item  
            res = res - _values[i - 1];
            v = v - _volumes[i - 1];
        }
    }
}