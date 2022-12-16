// Дано літерний рядок, який містить послідовність символів s[0], ..., s[n], ...
// 1.   Вияснити, чи є серед цих символів пара сусідніх букв “no” або “on”
// 2.   Замінити кожну пару сусідніх букв “no” трійкою зірочок “***”

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

char* Change(char* s)
{
    char string[10];
    size_t len = strlen(s);
    size_t no = 0;
    
    while (no < len && s[no] != 0)
    {
        if (s[no] == no)
        {
            strcat(string, "***");
        }
    }
   return s;
}

int main()
{
    char s[10] = "school";
    char c     = 'a';
          
    if ( strchr(s, c) )
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
          
    return 0;
}

