/*
* Прощу прощения за долгое отсутствие,
* я был сильно занят подготовкой к ЕГЭ
* и последующей пересдачей одного из предметов
*/
#include <iostream>

void GetNubers(int start, int N) {
    for (int i = start; i < N; i += 2) {
        std::cout << i << "\n";
    }
}
void isNumbersOdd(int N, bool isOdd) {
    if (isOdd) {
        GetNubers(1, N);
    }
    else {
        GetNubers(0, N);
    }
}
int main()
{
    int N = 115; //change N
    bool isOdd = true; //change Odd or Not

    GetNubers(0, N);

    std::cout << "\n";

    isNumbersOdd(N, isOdd);

    std::cout << "Cycles used: 1, if/else used: 1";
}

