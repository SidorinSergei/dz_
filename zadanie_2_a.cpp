#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;
ofstream f("C:\\Users\\79892\\Desktop\\dz.txt");
void Razm(string razm, int place, int n, int k)
{
    int p = 0;
    if (place > k)
    {

        for (int i = 0; i < k; i++)
        {
            if (razm[i] == '1')
                p++;

        }
        if (p == 2)
        {
            for (int i = 0; i < k; i++)
            {
                if (razm[i] == '1')
                    razm[i] = 'a';
                if (razm[i] == '2')
                    razm[i] = 'b';
                if (razm[i] == '3')
                    razm[i] = 'c';
                if (razm[i] == '4')
                    razm[i] = 'd';
                if (razm[i] == '5')
                    razm[i] = 'e';
                if (razm[i] == '6')
                    razm[i] = 'f';

            }
            f << razm << endl;
        }
    }
    else
        for (int i = 0; i < n; i++)
        {
            ostringstream os;
            os << i + 1;

            Razm(razm + os.str(), place + 1, n, k);
        }
}
int main()
{

    int n;
    int k;
    setlocale(LC_ALL, "Russian_Russia.1251");
    cout << "Введите n и k: " << endl;
    cin >> n >> k;
    cout << "Размещения из " << n << " по " << k << ": " << endl;
    Razm("", 1, n, k);

    return 0;
}

