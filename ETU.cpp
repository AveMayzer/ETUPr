#include <iostream> 
using namespace std; 

int main() {

    cout << "Под int отводится " << sizeof(int) << " байта памяти" << endl; // 4
    cout << "Под short int отводится " << sizeof(short int) << " байта памяти" << endl; // 2
    cout << "Под long int отводится " << sizeof(long long) << " байта памяти" << endl; // 8 (???? От компилятора чтоль зависит) 
    cout << "Под float отводится " << sizeof(float) << " байта памяти" << endl; // 4
    cout << "Под double отводится " << sizeof(double) << " байт памяти" << endl; // 8
    cout << "Под long double отводится " << sizeof(long double) << " байтов памяти" << endl; // 16
    cout << "Под char отводится " << sizeof(char) << " байт памяти" << endl; // 1
    cout << "Под bool отводитья " << sizeof(bool) << " байт памяти\n" << endl; // 1

    cout << "Теперь нужно ввести целое число для вывода двоичного представления " << endl; // int
    
    unsigned int mask = 1 << 31;
    int number;
    cin >> number;
    

    for (int i = 0; i < 32; ++i){
        cout << ((number & mask) ? 1 : 0);
        if (i % 8 == 0) {
            cout << " ";
        }
        mask = mask >> 1;

    }

    cout << "\nТеперь нужно ввести вещественное число для вывода двоичного представления" << endl; // float

    unsigned int mask2 = 1 << 31;
    union 
    {
        float numberFloat; 
        int numFloat;
    };
    cin >> numberFloat;
    cout << endl;

    for (int i = 0; i < 32; ++i){
        cout << ((mask2 & numFloat) ? 1 : 0);
        if ((i == 0) || (i == 8)) {
            cout << " ";
        }
        mask2 = mask2 >> 1;
    }
    
    cout << "\nТеперь нужно ввести вещественное число (double) для вывода двоичного представления" << endl; // double

    unsigned long long mask3 = 1ULL << 63;
    union 
    {
        double numberDouble; 
        long long numDouble;
    };
    cin >> numberDouble;
    cout << endl;

    for (int i = 0; i < 64; ++i){
        cout << ((mask3 & numDouble) ? 1 : 0);
        if ((i == 0) || (i == 8)) {
            cout << " ";
        }
        mask3 = mask3 >> 1;
    }
    cout << endl;
    /* ----------------------------------------------------------------------------------------------------------------------------------
       ---------------------------------------------------------------------------------------------------------------------------------- */
    
    // integer

    cout << "Реализация ИДЗ: инвертирование битов для int\n";
    
    bool mode = true;
    int numberIntIdz;
    while (mode){
        bool whilemode = 1;
        cout << "Введи любое число типа integer (чтобы выйти, введи 0)\n";
        
        cin >> numberIntIdz;
        if (numberIntIdz == 0) {
            break;
        }
        cout << "Битовое представления числа: (чтобы продолжить - 1, выйти - 0)\n";
        while (whilemode){
            bool cont = 1;
            
            unsigned int mask = 1 << 31;
            for (int i = 0; i < 32; ++i){
                cout << ((numberIntIdz & mask) ? 1 : 0);
                if (i % 8 == 0) {
                    cout << " ";
                }
                mask = mask >> 1;

            }
            cout << endl;
            numberIntIdz = ~numberIntIdz;
            cin >> cont;
            
            if (cont == 0) {
                cout << "Выход\n";
                whilemode = 0;
            }

        }
    }

    // float

    cout << "Реализация ИДЗ: инвертирование битов для float\n";

    union 
    {
        float numberFloatIdz; 
        int numFloatIdz;
    };

    while (mode){
        bool whilemode = 1;
        cout << "Введи любое число типа float (чтобы выйти, введи 0)\n";
        
        cin >> numberFloatIdz;
        if (numberFloatIdz == 0) {
            break;
        }
        cout << "Битовое представления числа: (чтобы продолжить - 1, выйти - 0)\n";
        while (whilemode){
            bool cont = 1;
            
            unsigned int mask = 1 << 31;
            for (int i = 0; i < 32; ++i){
                cout << ((mask & numFloatIdz) ? 1 : 0);
                if ((i == 0) || (i == 8)) {
                    cout << " ";
                    }
                mask = mask >> 1;
    }
            cout << endl;
            numFloatIdz = ~numFloatIdz;
            cin >> cont;
            
            if (cont == 0) {
                cout << "Выход\n";
                whilemode = 0;
            }

        }
    }

    // double

    cout << "Реализация ИДЗ: инвертирование битов для double\n";

    union 
    {
        double numberDoubleIdz; 
        long long numDoubleIdz;
    };

    while (mode){
        bool whilemode = 1;
        cout << "Введи любое число типа double (чтобы выйти, введи 0)\n";
        
        cin >> numberDoubleIdz;
        if (numberDoubleIdz == 0) {
            break;
        }
        cout << "Битовое представления числа: (чтобы продолжить - 1, выйти - 0)\n";
        while (whilemode){
            bool cont = 1;
            
            unsigned long long mask = 1ULL << 63;
            for (int i = 0; i < 32; ++i){
                cout << ((mask & numDoubleIdz) ? 1 : 0);
                if ((i == 0) || (i == 8)) {
                    cout << " ";
                    }
                mask = mask >> 1;
    }
            cout << endl;
            numDoubleIdz = ~numDoubleIdz;
            cin >> cont;
            
            if (cont == 0) {
                cout << "Выход\n";
                whilemode = 0;
            }

        }
    }
    return 0;
}
