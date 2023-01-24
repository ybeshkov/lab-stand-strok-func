#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string S, S0;
    cout << "введите строку S:\n";
    getline(cin, S);
    cout << "введите подстроку S0:\n";
    getline(cin, S0);
    if (S.find(S0) != string::npos) cout << S.erase(S.find(S0), S0.size()) << endl;
    else cout << S << endl;
    system("pause");
    return 0;
}
