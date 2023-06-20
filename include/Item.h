#pragma once

#include <memory>

class Item
{
    private:

        const int _value;
        const int _volume;

    public:

        Item(int value, int volume): _value(std::move(value)), _volume(std::move(volume)){};
        const int getValue() const {return _value;};
        const int getVolume() const {return _volume;};
};

using ItemPtr = std::shared_ptr<Item>;