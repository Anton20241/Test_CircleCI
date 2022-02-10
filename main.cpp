#include <iostream>


int check(int got, int expected){
    if (got != expected){
        std::cout << "Ty loh" << std::endl;
        return 1;
    }
    std::cout << "Ty molodets" << std::endl;
    return 0;
}

int summa(int a, int b){
    return a + b;
}

int main(){
    int result = check(summa(2, 2), 4);
    return result;
}
