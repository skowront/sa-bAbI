#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_6[58];        // Tag.BODY
    char entity_8[3];         // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 58;            // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_2 = 87;            // Tag.BODY
    entity_3 = 95;            // Tag.BODY
    if(entity_3 < entity_2){  // Tag.BODY
    entity_3 = 88;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 8;             // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_3] = 'O'; // Tag.BUFWRITE_COND_SAFE
    entity_8[entity_4] = 'P'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER