#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    entity_9 = 63;            // Tag.BODY
    char entity_6[98];        // Tag.BODY
    char entity_0[2];         // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_5[66];        // Tag.BODY
    entity_8 = 8;             // Tag.BODY
    entity_1 = 18;            // Tag.BODY
    entity_7 = 17;            // Tag.BODY
    if(entity_1 < entity_9){  // Tag.BODY
    entity_0[entity_7] = 'M'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 92;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 94;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_8] = 'H'; // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_1] = 'S'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER