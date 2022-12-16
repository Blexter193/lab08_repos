// Дано літерний рядок, який містить послідовність символів s[0], ..., s[n], ...
// 1.   Вияснити, чи є серед цих символів пара сусідніх букв “no” або “on”
// 2.   Замінити кожну пару сусідніх букв “no” трійкою зірочок “***”

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

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
    string s = "school";
    char ch = 'h';
          
    if ( s.find(ch) != -1 )
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
          
    return 0;
}
