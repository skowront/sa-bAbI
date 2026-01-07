#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_9[65];        // Tag.BODY
    entity_3 = 72;            // Tag.BODY
    char entity_0[41];        // Tag.BODY
    entity_8 = 56;            // Tag.BODY
    entity_6 = 95;            // Tag.BODY
    if(entity_8 < entity_3){  // Tag.BODY
    entity_8 = 93;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0[entity_6] = 'A'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8 = 23;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_8] = '3'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER