// prime generator.cpp : This program will genarate prime numbers up to your input and save them in txt file.
//

#include <iostream>
#include <fstream>
#include <sstream>
bool isPrime(int num);

int main()
{
    int max;
    bool flag;
    std::string file;
    std::cout << "Enter name of file(without .txt)";
    std::cin >> file;
    file = file + ".txt";
    std::ofstream Output(file);
    std::cout << "Enter the max intiger. ";
    std::cin >> max;
    if (max < 2) {
        std::cout << "there are no prime numbers to generate.";
        return 0;
    };
    for (int i = 2; i <= max; i++) {
        flag = isPrime(i);
            if (flag == true){
                std::cout << i << ".\n";
                Output << i << "\n";
            }
    };
    system ("pause");
    return 0;
}
bool isPrime(int num) {
    bool flag = true;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}