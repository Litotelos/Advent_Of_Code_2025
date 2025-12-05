#include "Lock.h"

#include <iostream>
#include <ostream>


void Lock::Rotate_Left(int New_Position) {
  Current_Position -= New_Position;

    while (Current_Position < 0) {
        Current_Position += Lock_Dial.size();

    }
    if (Current_Position == 0){ Password_Counter++;}
}

void Lock::Rotate_Right(int New_Position) {
    Current_Position += New_Position;

    while (Current_Position >=  Lock_Dial.size())
        {
        Current_Position -= Lock_Dial.size();
    }
    if (Current_Position == 0) {Password_Counter++;}
}

void Lock::Lock_Init() {
    for (int i = 0 ; i <= 99 ; ++i) {
        Lock_Dial.push_back(i);
    }
    for (Current_Position = 0; Current_Position < 50; ++Current_Position) {}
}

// ////// Part 2 Solution //////
// void Lock::Rotate_Left(int New_Position) {
//     for (New_Position >= 0; New_Position--;) {
//         Current_Position--;
//         if (Current_Position < 0) {
//             Current_Position = 99;
//         }
//         if (Current_Position == 0) {
//             Password_Counter++;
//         }
//     }
// }
//
// void Lock::Rotate_Right(int New_Position) {
//     for (New_Position >= 0; New_Position--;) {
//         Current_Position++;
//         if (Current_Position > 99) {
//             Current_Position = 0;
//         }
//         if (Current_Position == 0) {
//             Password_Counter++;
//         }
//     }
// }
//
// void Lock::Lock_Init() {
//     for (int i = 0 ; i <= 99 ; ++i) {
//         Lock_Dial.push_back(i);
//     }
//     for (Current_Position = 0; Current_Position < 50; ++Current_Position) {}
// }
//
