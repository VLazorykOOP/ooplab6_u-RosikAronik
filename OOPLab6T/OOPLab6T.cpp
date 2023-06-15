#include <iostream>

void task1(); 
void task2(); 
void task3(); 

int main()
{
    int choice;
    do {
        
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Task 1" << std::endl;
        std::cout << "2. Task 2" << std::endl;
        std::cout << "3. Task 3" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Choose task: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            task1(); 
            break;
        case 2:
            task2(); 
            break;
        case 3:
            task3();
            break;
        default:
            std::cout << "Wrong imput." << std::endl;
            break;
        }
    } while (choice != 0);

    return 0;
}