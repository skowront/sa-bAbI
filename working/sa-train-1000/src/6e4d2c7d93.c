#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_2[72];        // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    entity_1 = 69;            // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 63;            // Tag.BODY
    char entity_8[67];        // Tag.BODY
    if(entity_5 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 3;             // Tag.BODY
    entity_2[entity_6] = 'u'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    entity_8[entity_5] = 'i'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER