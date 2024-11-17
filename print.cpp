#include <iostream>
template <typename A>

void print(A any){
    std::cout << any << "\n";
}

int main(){
    print("Hello, World!");
    print(2);
    print(2.1);
    print('A');

    return 0;
}