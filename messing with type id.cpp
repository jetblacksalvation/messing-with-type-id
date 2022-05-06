// messing with type id.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <vector>
int buh = 3;
int t;
float e;

std::vector<int> r{
    1,2,3
};
int rrry[3] = {
    1,2,3
};

template<typename T, int size> void func_arrmake(T arry[]);

int main()
{
    const type_info& ty = typeid(buh);
    std::cout << "Hello World!\n";
    
    func_arrmake<int, 3>(rrry);

}
template<typename T,int size > void func_arrmake(T arry[]) {//stuff to push into the new array;
    std::array<T, size>newarray;//makes a new array with the parameters

    std::cout << typeid(arry[1]).name() << " - is the type of varable\n";//can say the name type 
    std::cout << typeid(newarray[0]).name() << " - is the nametype of the new array \n";
    
        std::cout << "pushing stuff from arry to new array\n";
        for (int x = 0; x < size; x++) {
            newarray[x] = arry[x];
            std::cout << "newarray is " << newarray[x] << std::endl;
        }
    

};


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
