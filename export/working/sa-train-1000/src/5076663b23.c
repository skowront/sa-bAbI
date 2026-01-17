#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    char entity_7[72];        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 23;            // Tag.BODY
    entity_4 = 80;            // Tag.BODY
    if(entity_4 < entity_5){  // Tag.BODY
    entity_4 = 27;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 32;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_1[67];        // Tag.BODY
    char entity_8[84];        // Tag.BODY
    entity_7[entity_4] = 'x'; // Tag.BUFWRITE_COND_SAFE
    entity_2 = 41;            // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_8[entity_2] = 'w'; // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 64;            // Tag.BODY
    entity_1[entity_3] = 'j'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER