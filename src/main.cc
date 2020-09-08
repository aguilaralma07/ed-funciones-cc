#include <iostream> //para el cout, endl

void PrintHello(const char* charArr)
{
    std::cout << charArr;
}

int Add(int a, int b)
{

    return a + b;
}

void PrintArrStr(const char* arrString){
    for(int i=0; i<5; i++){
        std::cout << arrString + i << std::endl;
    }

}

int main()
{
    //int intArr[3]{4, 100, 42};
    //std::cout << intArr[1] << std::endl;

    //char charArr[5]{'h', 'e', 'l', 'l', 'o'};
    //char charArr2[]{"hello"};

    const char* myString{"Hello"};
    PrintArrStr(myString);

    /*for(int i=0; i<5; i++){
        std::cout << charArr2 + i << std::endl;
    }*/

    //std::cout << "Add: " << Add(1, 2) << std::endl;
    std::cin.get();

    return 0;
}
