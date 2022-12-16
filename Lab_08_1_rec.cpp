// Дано літерний рядок, який містить послідовність символів s[0], ..., s[n], ...
// 1.   Вияснити, чи є серед цих символів пара сусідніх букв “no” або “on”
// 2.   Замінити кожну пару сусідніх букв “no” трійкою зірочок “***”

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

bool Include(const char* s, const char c, int no, int on)
{
    if (c == s[no])
        return true;
    
    if (s[no] != '\0')
        return Include(s, c, no+1, on+1);
    
    if (s[on] != '\0')
        return Include(s, c, no+1, on+1);
    else
        return false;
}

char* Change(char* s, int no, int on)
{
    char string[10];
    size_t len = strlen(s);
    
    if (s[no] != 0)
    {
        if (s[no-1] == no-1)
        {
            strcat(string, "***");
            return Change(s, no, on);
        }
    }
    return s;
}

int main()
{
    char s[10] = "school";
    char c     = 'a';
    
    if ( Include(s, c, 0, 0) )
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
          
    return 0;
}
