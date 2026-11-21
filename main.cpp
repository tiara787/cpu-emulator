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
        
        uint8_t instruction = RAM[PC];
        PC++;

    std::cout << "Fetched Instruction: " <<  static_cast<int>(instruction) << "\n" 
        << "Program Counter: "  
        << static_cast<int>(PC) << "\n"  
        << "Accumulator: " 
        << static_cast<int>(A) << '\n';

        return 0;
    }