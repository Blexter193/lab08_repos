// Дано літерний рядок, який містить послідовність символів
// s[0], ... , s[n], ...
// Підрахувати найбільшу кількість пробілів, які розташовані поспіль.
// "i" - пробіли

#include <iostream>
using namespace std;

int Count(const char* s, const char c)
{
    int k=0;
    for (int i=0; s[i] != '\0'; i++)
        if (c == s[i])
            k++;
    
    return k;
}

int main()
{
    char s[10] = "school";
    char c     = 'o';
    
    cout << Count(s, c) << endl;
    
    return 0;
}
