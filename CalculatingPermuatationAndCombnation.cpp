#include <iostream>
#include <cmath>
#include <algorithm>

void FactorialPremuAndComb(int R,int N ,int& facN, int& facR, int& facNMinusR) {
    for (int i = 1; i <= N; i++) {
        facN *= i;
    }

    for (int i = 1; i <= R; i++) {
        facR *= i;
    }

    for (int i = 1; i <= N - R; i++) {
        facNMinusR *= i;
    }
}

int main()
{
    int N;
    int R;
    std::cout << "Enter the amount of digits : ";
    std::cin >> N;

    std::cout << "Enter how many of the digits you want to use : ";
    std::cin >> R;
    std::cout << "\n";

    int facN = 1;
    int facR = 1;
    int facNMinusR = 1;

    FactorialPremuAndComb(R, N, facN, facR, facNMinusR);

    int combResult = facN / (facNMinusR * facR);
    int premutationsResult = facN / (facNMinusR);


    std::cout << "Combination : " << combResult << "\n";
    std::cout << "Premutations : " << premutationsResult;
    
}
