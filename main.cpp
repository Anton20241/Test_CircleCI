#include <iostream>


int check(int got, int expected){
    if (got != expected){
        std::cout << "Ty loh" << std::endl;
        return 1;
    }
    std::cout << "Ty molodets" << std::endl;
    return 0;
}

int main(){
    int result = check(2 + 2, 5);
    return result;
}
