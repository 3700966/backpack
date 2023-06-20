
#include "../include/FileReader.h"
#include "../include/BackpackSolver.h"

int main()
{
    FileReader fileReader("resources/items.txt");
    
    std::vector<std::vector<int>> items = fileReader.readFile();  
    // items contains the list of values, then the list of volumes

    BackpackSolver backpackSolver(fileReader.getTotalVolume(), items[0], items[1]);
    backpackSolver.display();
    backpackSolver.solve();
    
    return 0;
}