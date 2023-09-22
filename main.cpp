#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //jó név beírása
    std::cout << "1-100 ertekek duplazasa"; //idézőjel+pontosvessző
    for (int i = 0;i<N_ELEMENTS; i++) //for ciklus feltétel+növelés
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<N_ELEMENTS; i++) //feltétel pótlása
    {
        std::cout << "Ertek:"<< b[i] << std::endl; //pontosveszző és értékiírás
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;  //értékadás
    for (int i = 0; i < N_ELEMENTS; i++)     //pontosvessző
    {
        atlag += b[i]; //pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b; //memóriafelszabadítás

    std::cout << "Hibajavitas ellenorizve";
    
    return 0;
}
