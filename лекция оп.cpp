
#include "windows.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    const int n = 3;
    int C[n];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
    {
        C[i] = rand() %21 - 10;
    }
   for (int i = 0; i < n; i+=2)
    {
        if (i % 4 ==0) cout << C[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (C[i] > max) max = C[i];
        cout << C[i] << " ";
    }
    cout << endl << max;
    return 0;
    
}

