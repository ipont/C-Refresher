#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Const Pointer and Const Data
    int some_data = 69;
    
    // address stored in pointer cannot change
    int *const my_ptr = &some_data;

    // the value pointed to cannot be changed
    const int *my_ptr = &some_data;

    // neither address nor value may be changed
    const int *const my_ptr = &some_data;

    return EXIT_SUCCESS;
}