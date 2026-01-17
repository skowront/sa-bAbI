#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_8[18];        // Tag.BODY
    char entity_0[58];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_6 = 0;             // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    entity_5 = 70;            // Tag.BODY
    if(entity_3 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0[entity_5] = 'M'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = 27;            // Tag.BODY
    }                         // Tag.BODY
    char entity_1[58];        // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_8[entity_3] = 'j'; // Tag.BUFWRITE_COND_UNSAFE
    entity_4 = 1;             // Tag.BODY
    entity_1[entity_4] = 'T'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER