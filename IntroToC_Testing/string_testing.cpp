#include <string>
#include <iostream>


// Define a function "logicalAnd" which takes two
bool logicalAnd(bool value1, bool value2) {
    return value1 && value2;
}

bool logicalOr(bool value1, bool value2) {
    return value1 || value2;
}

bool logicalNot(bool value) {
    return !value;
}

void checklogicalOr(){
    bool value1 = true;
    bool value2 = true;
    bool result = logicalOr(value1, value2);
    // Print the result
    std::cout << "logicalOr(" << value1 << ", " << value2 << ") = " << result << std::endl;

    value1 = true;
    value2 = false;
    result = logicalOr(value1, value2);
    // Print the result
    std::cout << "logicalOr(" << value1 << ", " << value2 << ") = " << result << std::endl;

    value1 = false;
    value2 = true;
    result = logicalOr(value1, value2);
    // Print the result
    std::cout << "logicalOr(" << value1 << ", " << value2 << ") = " << result << std::endl;

    value1 = false;
    value2 = false;
    result = logicalOr(value1, value2);
    // Print the result
    std::cout << "logicalOr(" << value1 << ", " << value2 << ") = " << result << std::endl;
}

void checklogicalAnd(){
    bool value1 = true;
    bool value2 = true;
    bool result = logicalAnd(value1, value2);
    // Print the result
    std::cout << "logicalAnd(" << value1 << ", " << value2 << ") = " << result << std::endl;

    value1 = true;
    value2 = false;
    result = logicalAnd(value1, value2);
    // Print the result
    std::cout << "logicalAnd(" << value1 << ", " << value2 << ") = " << result << std::endl;

    value1 = false;
    value2 = true;
    result = logicalAnd(value1, value2);
    // Print the result
    std::cout << "logicalAnd(" << value1 << ", " << value2 << ") = " << result << std::endl;

    value1 = false;
    value2 = false;
    result = logicalAnd(value1, value2);
    // Print the result
    std::cout << "logicalAnd(" << value1 << ", " << value2 << ") = " << result << std::endl;
}

void checklogicalNot(){
    bool value = true;
    bool result = logicalNot(value);
    // Print the result
    std::cout << "logicalNot(" << value << ") = " << result << std::endl;

    value = false;
    result = logicalNot(value);
    // Print the result
    std::cout << "logicalNot(" << value << ") = " << result << std::endl;
}

//std::cout << "Please enter a, o, or n to very AND, OR and NOT gates respectively." << std::endl;

int main(char arg){
    if (arg == 'a'){
        checklogicalAnd();

    }
    else if (arg == 'o'){
        checklogicalOr();
    }
    else if (arg == 'n'){
        checklogicalNot();
    }
    else{
        std::cout << "Please enter a, o, or n" << std::endl;
    }
    return 0;
}

