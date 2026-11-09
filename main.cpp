#include <iostream>
#include <cstdint>

int main() {
    uint8_t A = 0;
    uint8_t PC = 0;

    bool zeroFlag = false;
    bool carryFlag = false;
    bool halted = false;

    uint8_t RAM[256] = {};

    RAM[0] = 10;
    A = RAM[PC];
    uint8_t instruction = A;
    PC++;

   std::cout << static_cast<int>(PC) <<  static_cast<int>(instruction) << '\n';



    return 0;
}