#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    char entity_8[63];        // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_6 = 93;            // Tag.BODY
    entity_4 = 86;            // Tag.BODY
    entity_8[entity_6] = 'h'; // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_1[41];        // Tag.BODY
    entity_2 = 86;            // Tag.BODY
    if(entity_4 < entity_2){  // Tag.BODY
    entity_4 = 63;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 31;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_4] = 'n'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER