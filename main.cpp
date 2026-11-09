#include <iostream>
#include <string>

int main() {
    int num1 = 0;
    int num2 = 0;

    std::cout << "Enter the first number: \n";
    std::cin >> num1;
    std::cout << "Enter the second number: \n";
    std::cin >> num2;

    int sum = 0;
    sum = num1 + num2;
     
    int modulo = 0;

    modulo = sum%256;

    std::string string;


    if(sum <= 255){
        string = ", no carry";
        
    }
    else if (sum > 255) {
        string = ",carry";
    }
   if (modulo == 0){
        string += ", zero flag";
    }

    

    std::cout <<  sum << modulo << string;
}




