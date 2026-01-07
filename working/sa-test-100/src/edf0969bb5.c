#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    entity_3 = 27;            // Tag.BODY
    char entity_8[61];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 86;            // Tag.BODY
    if(entity_3 < entity_2){  // Tag.BODY
    entity_3 = 98;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 42;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_9[15];        // Tag.BODY
    entity_4 = 76;            // Tag.BODY
    entity_8[entity_3] = 'n'; // Tag.BUFWRITE_COND_UNSAFE
    entity_9[entity_4] = '9'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER