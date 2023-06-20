#include "../include/FileReader.h"

std::list<ItemPtr> FileReader::readFile()
{
    std::list<ItemPtr> items;

    std::ifstream itemsFile; 
    itemsFile.open(_filename);

    std::string value;
    std::string volume;

    if ( itemsFile.is_open() ) 
    {
        std::getline (itemsFile, value);
        std::getline (itemsFile, volume);  
    }

    std::istringstream valueStream(value);
    std::istringstream volumeStream(volume);
    
    std::string itemValue, itemVolume;

    while ( std::getline( valueStream, itemValue, ' ' ) &&  std::getline( volumeStream, itemVolume, ' ' ) ) {
        items.push_back(std::make_shared<Item>( stoi(itemValue), stoi(itemVolume)));
    }
    
    return items;
}