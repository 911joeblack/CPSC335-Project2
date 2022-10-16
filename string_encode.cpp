#include <iostream>

std::string StringEncode(std::string our_string) {
    std::string string_c;
    int same_count = 1;
    bool must_add = false;
    
    for(int i = 0; i < our_string.length() - 1; ++i) {
        if(our_string[i] == our_string[i+1]) {
            ++same_count;
            must_add = true;
        } else if(same_count > 1) {
            string_c += std::to_string(same_count);
            string_c += our_string[i];
            must_add = false;
            same_count = 1;
        } else {
            string_c += our_string[i];
            same_count = 1;
        }
    }
    if (must_add) {
        string_c += std::to_string(same_count);
        string_c += our_string[our_string.length() - 1];
    } else {
        string_c += our_string[our_string.length() - 1];
    }
    
    return string_c;
}

int main()
{
    std::string the_string;// = "Input some text here for string encoding";
    std::cout << "Input string for encoding: ";
    std::getline(std::cin, the_string);
    std::cout << the_string << std::endl;
    std::cout << StringEncode(the_string) << std::endl;

    return 0;
}
