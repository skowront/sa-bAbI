#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_1[82];        // Tag.BODY
    entity_5 = 86;            // Tag.BODY
    entity_6 = 3;             // Tag.BODY
    entity_3 = 28;            // Tag.BODY
    char entity_8[15];        // Tag.BODY
    if(entity_3 < entity_5){  // Tag.BODY
    entity_3 = 63;            // Tag.BODY
    entity_8[entity_6] = 'm'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_3 = 0;             // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_3] = 'q'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER