#include <iostream>
#include <fstream>

#include "Lock.h"




int main() {
    Lock Security_Lock;
    std::string Combination;
    Security_Lock.Lock_Init();
    int Current_Task= 1;

    std::ifstream input;
    std::string Combinations = "Puzzel.txt";

    input.open(Combinations);

    while (std::getline(input, Combination)) {
        char Combination_Rotation = Combination.at(0);
        auto Combination_Value = std::stoi(Combination.substr(1)) ;

        if (Combination_Rotation == 'L') {
            Security_Lock.Rotate_Left(Combination_Value);
        }

        if (Combination_Rotation == 'R') {
            Security_Lock.Rotate_Right(Combination_Value);
        }

    }
    input.close();


    std::cout<< Security_Lock.Password_Counter<< std::endl;

    return 0;

}
