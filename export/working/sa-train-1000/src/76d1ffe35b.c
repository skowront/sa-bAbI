#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    char entity_5[2];         // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_6[28];        // Tag.BODY
    entity_0 = 9;             // Tag.BODY
    entity_8 = 8;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 69;            // Tag.BODY
    char entity_3[82];        // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    entity_6[entity_7] = 'G'; // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_4 < entity_8){  // Tag.BODY
    entity_3[entity_0] = '3'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_4 = 32;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_4] = 'Y'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER