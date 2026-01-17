#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_8[76];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_2 = 93;            // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    if(entity_7 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 12;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_7] = 'V'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER