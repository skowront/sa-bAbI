#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    char entity_8[33];        // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_3 = 54;            // Tag.BODY
    entity_9 = 18;            // Tag.BODY
    if(entity_3 < entity_9){  // Tag.BODY
    entity_3 = 93;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 68;            // Tag.BODY
    }                         // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_2[65];        // Tag.BODY
    entity_6 = 6;             // Tag.BODY
    entity_8[entity_3] = 'c'; // Tag.BUFWRITE_COND_UNSAFE
    entity_2[entity_6] = 'm'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER