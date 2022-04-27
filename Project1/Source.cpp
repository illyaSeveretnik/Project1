#include <iostream>
#include <time.h>

using namespace std;
void main()
{
    setlocale(LC_ALL, "rus");

    cout << "Задание №1" << endl;
    int sizeA, sizeB;
    cout << "Укажите размер первого массива -> ";
    cin >> sizeA;
    cout << "Укажите размер второго массива -> ";
    cin >> sizeB;
    int* arrA = new int[sizeA];
    int* arrB = new int[sizeB];
    cout << "\nПервый массив -> ";
    for (int x = 0; x < sizeA; x++)
    {
        arrA[x] = rand() % 10 + 1;
        cout << arrA[x] << " ";
    }
    cout << "\nВторой массив -> ";
    for (int x = 0; x < sizeB; x++)
    {
        arrB[x] = rand() % 10 + 1;
        cout << arrB[x] << " ";
    }

    int tmp = 0;
    for (int x = 0; x < sizeA; x++)
    {
        for (int y = 0; y < sizeB; y++)
        {
            if (arrA[x] == arrB[y])
            {
                tmp++;
            }
        }
    }

    int sizeC = tmp;
    int* arrtmp = new int[sizeC];
    tmp = 0;
    for (int y = 0; y < sizeB; y++)
    {
        for (int z = 0; z < sizeA; z++)
        {
            if (arrB[y] == arrA[z])
            {
                arrtmp[tmp] = arrB[y];
                tmp++;
            }
        }
    }

    int* arrC = new int[sizeC];
    cout << "\nТретий массив -> ";
    for (int x = 0; x < sizeC; x++)
    {
        arrC[x] = arrtmp[x];
        cout << arrC[x] << " ";
    }
    cout << "Задание №2 " << endl;
    void set(int* ar, int n);
    void print(int* ar, int n);
    int* zbir(int* ar, int n, int* ar1, int m, int* ar2, int* a);
    void main() 
    {
        srand(time(0));
        int n, m, a = 1;
        cin >> n;
        int* ar = new int[n];
        cin >> m;
        int* ar1 = new int[m];
        int* ar2 = new int[a];
        set(ar, n);
        print(ar, n);
        cout << "\n";
        set(ar1, m);
        print(ar1, m);
        cout << "\n";
        ar2 = zbir(ar, n, ar, m, ar2, &a);
        print(ar2, a);
        cout << "\n";
        system("pause");
    }
    int* zbir(int* ar, int n, int* ar1, int m, int* ar2, int* a) {
        int* p = new int[*a];
        for (int i = 0; i < n; i++) {
            if ((*ar + n) == (*ar1 + m)) {
                *(p + *a) = (*ar + n);
                *a++;
            }
        }
        for (int i = 0; i < m; i++) {
            if ((*ar1 + m) == (*ar + n)) {
                *(p + *a) = (*ar1 + m);
                *a++;
            }
        }
        a--;
        delete[] ar2;
        return p;
    }
    void set(int* ar, int n) {
        for (int i = 0; i < n; i++) {
            *(ar + i) = rand() % 101 - 50;
        }
    }
    void print(int* ar, int n) {
        for (int i = 0; i < n; i++) {
            cout << *(ar + i) << " ";
        }
        cout << "\n";
























}