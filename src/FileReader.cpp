#include "../include/FileReader.h"

std::vector<std::vector<int>> FileReader::readFile()
{
    std::vector<std::vector<int>> items;
    std::vector<int> values;
    std::vector<int> volumes;

    std::ifstream itemsFile; 
    itemsFile.open(_filename);

    std::string totalVolume;
    std::string value;
    std::string volume;

    if ( itemsFile.is_open() ) 
    {
        std::getline(itemsFile, totalVolume);
        std::getline (itemsFile, value);
        std::getline (itemsFile, volume);  
    }
    _totalVolume = stoi(totalVolume);
    
    std::istringstream valueStream(value);
    std::istringstream volumeStream(volume);
    
    std::string itemValue, itemVolume;

    while ( std::getline( valueStream, itemValue, ' ' ) &&  std::getline( volumeStream, itemVolume, ' ' ) ) {
        values.push_back(stoi(itemValue));
        volumes.push_back(stoi(itemVolume));
        
    }
    
    items.push_back(values);
    items.push_back(volumes);
    return items;
}