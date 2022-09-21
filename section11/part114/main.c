#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find_all_occurrences(char str[], char c, int indexes[])
{
    int found = 0;
    char *pstr = str;

    do
    {
        pstr = strchr(pstr, c);
        if (pstr)
        {
            indexes[found++] = pstr++ - str;
        }
    } while (pstr);
    return found;
}

void print_occurences(char str[], int occurrences_indexes[], int found)
{
    char pattern[strlen(str) + 1];
    memset(pattern, ' ', sizeof(pattern));
    for(int i = 0; i < found; i++){
        pattern[occurrences_indexes[i]] = '^';
    }
    pattern[sizeof(pattern)] = '\0';
    printf("%s\n", str);
    printf("%s\n", pattern);
}

int main()
{
    char str[] = "This is a sample string";
    int occurrences[sizeof(str)];
    int found = find_all_occurrences(str, 's', occurrences);
    print_occurences(str, occurrences, found);
    
    return EXIT_SUCCESS;
}
