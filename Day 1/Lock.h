#pragma once
#include <vector>

struct Lock {
    std::vector<int> Lock_Dial{};
    int Current_Position = 0;
    int New_Position = 0;
    int Password_Counter = 0;

    void Lock_Init();
    void Rotate_Right(int New_Right_Position);
    void Rotate_Left(int New_Left_Position);

};