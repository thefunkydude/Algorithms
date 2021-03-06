/*
    This porgram determines whether a string over {a, b}
    is accepted by Finite State Automata
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char *string = "abbabba", *state = 'E';
    int i;
    for(i = 1 ; i < strlen(string) ; i++)
    {
        if(state == 'E' && (string[i] == 'a' || string[i] == 'b'))
            state = '0';
        else if(state == '0' && (string[i] == 'a' || string[i] == 'b'))
            state = 'E';
        else    
            ;
    }
    if(state == '0')
        printf("Given string is accepted by FSA");
    else    
        printf("Given string is not accepted by FSA");
    
    return 0;
}
