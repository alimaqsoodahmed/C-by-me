#include<iostream>

int main() {
    int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (auto number : numbers) {
        if (number == 5) {
            std::cout << number << std::endl;

            break;
        }
    }

    return 0;
}
