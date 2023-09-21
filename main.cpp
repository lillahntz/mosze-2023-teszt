#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //1.hiba: hibás név
    int *b = new int[NELEMENTS];
    //2.hiba: hiányzó pontosvessző és idézőjel
    std::cout << '1-100 ertekek duplazasa'
    //3.hiba: hiányos for ciklus
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    //4.hiba: feltétel nélküli for ciklus
    for (int i = 0; i; i++)
    {
        //5.hiba: hiányzó pontosveszző és értékiírás
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    //6.hiba: nincs értékadás
    int atlag;
    //7.hiba: sima vessző pontosvessző helyett
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
