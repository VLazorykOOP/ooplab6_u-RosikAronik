#include <iostream>


    class Class1 {
    public:
        int data1;
    };


    class Class2 : public Class1 {
    public:
        int data2;
    };


    class Class3 : public Class1 {
    public:
        int data3;
    };


    class Class4 : public Class2 {
    public:
        int data4;
    };


    class Class5 : public Class3 {
    public:
        int data5;
    };

    class Class6 : public virtual Class4, public virtual Class5, public virtual Class1 {
    public:
        int data6;
    };

    void task1() {

        Class2 obj2;
        Class3 obj3;
        Class4 obj4;
        Class5 obj5;
        Class6 obj6;


        std::cout << "Size of Class2: " << sizeof(obj2) << " bite" << std::endl;
        std::cout << "Size of Class3: " << sizeof(obj3) << " bite" << std::endl;
        std::cout << "Size of Class4: " << sizeof(obj4) << " bite" << std::endl;
        std::cout << "Size of Class5: " << sizeof(obj5) << " bite" << std::endl;
        std::cout << "Size of Class6: " << sizeof(obj6) << " bite" << std::endl;
    }
     
        
    
