
#include "../include/FileReader.h"
#include "../include/BackpackSolver.h"

int main()
{
    FileReader fileReader("resources/items.txt");
    std::list<ItemPtr> items = fileReader.readFile();  
    BackpackSolver backpackSolver(items);
    backpackSolver.display();

    return 0;
}