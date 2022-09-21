#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char str[] = "Hello!"; // cannot reassign elements
    char *str_ptr = "Hello";     // cannot reassign elements, same as above

    char days[][10] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"};

    for (int i = 0; i < 7; i++)
    {
        printf("%s\n", days[i]);
    }

    char *days_ptr[] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"};

    for (int i = 0; i < 7; i++)
    {
        printf("%s\n", days_ptr[i]);
    }

    char input_str[10];
    scanf("%s", input_str); // scanf ignores whitespace before first and after last whitespace
    
    return EXIT_SUCCESS;
}
