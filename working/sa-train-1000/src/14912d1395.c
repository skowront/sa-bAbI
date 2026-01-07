#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_7 = 19;            // Tag.BODY
    char entity_8[46];        // Tag.BODY
    entity_5 = 15;            // Tag.BODY
    if(entity_5 < entity_7){  // Tag.BODY
    entity_5 = 84;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 98;            // Tag.BODY
    }                         // Tag.BODY
    char entity_1[78];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_8[entity_5] = 'c'; // Tag.BUFWRITE_COND_UNSAFE
    entity_2 = 65;            // Tag.BODY
    entity_1[entity_2] = 'I'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER