#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    char entity_3[58];        // Tag.BODY
    entity_8 = 96;            // Tag.BODY
    if(entity_2 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 26;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_2] = '3'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER