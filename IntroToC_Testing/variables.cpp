#include <iostream>
#include <string>

// Path: variables.cpp

int third_one(){
    std::cout << "Hello World Again!" << std::endl;
    return 0;
}
int second_one() {
    std::cout << "Hello World!" << std::endl;
    third_one();
    return 0;
}

int main() {
    // Declare and initialize variables
    int age = 25;
    double height = 1.75;
    char grade = 'A';
    bool isStudent = true;

    // Print the values of the variables
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Is student: " << std::boolalpha << isStudent << std::endl;
    second_one();
    return 0;
}

