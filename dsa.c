#include "dsa.h"
EXPORT_DA_TYPES()

int main(void)
{
    const char *buffer = "Hello";
    String_DA *array = init_String_dynamic_array(10);
    for (int i = 0; i < 10; i++){
        append_String_DA(array, buffer);
    }
    printf("%s\n",get_String_DA(array,4));
    free_String_DA(array);
}
