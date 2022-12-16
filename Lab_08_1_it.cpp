// Дано літерний рядок, який містить послідовність символів s[0], ..., s[n], ...
// 1.   Вияснити, чи є серед цих символів пара сусідніх букв “no” або “on”
// 2.   Замінити кожну пару сусідніх букв “no” трійкою зірочок “***”

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

bool Include(const char* s, const char c)
{
    for (int no = 0; s[no] != '\0'; no++)
        if (c == s[no])
            return true;
    
    for (int on = 0; s[on] != '\0'; on++)
        if (c == s[on])
            return true;
    
    return false;
    
}

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
    char c     = 'h';
          
    if ( Include(s, c) )
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
          
    return 0;
}
