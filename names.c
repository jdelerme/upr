
#include <cs50.h>
#include <stdio.h>
#include <string.h>



int main(void)
{
//Ask for 4 names and print them

int n = 4;
String names[n];

    for (int i = 0;i < n; i++)
    {
            names[i] = GetString();
            printf("%s\n", names[i]);
   
    }
   
}    
