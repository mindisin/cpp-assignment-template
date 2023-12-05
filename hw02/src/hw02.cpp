#include <hw02.h>

string hw02(string input_str)
{
    for(int i = 0; i < input_str.length(); ++i) {
        if(more_one_symbol(input_str[i], input_str, i)) delete_symbols(input_str[i], input_str);
        else continue;
    }
    return input_str;
}

bool more_one_symbol(char symbol, string str, int idx){
    int count = 0;
    for(; idx < str.length(); ++idx) {
        if(str.find(symbol)){
            ++count;
        }
        if(count > 1) return false;
    }

    return true;
}

void delete_symbols(char symbol, string str) {
    for(int i = str.find(symbol)+1; i < str.length(); ++i) {
        if(str[i] == symbol) str.erase(i);
    }
}