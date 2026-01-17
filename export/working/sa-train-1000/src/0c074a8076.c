#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_8[57];        // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 66;            // Tag.BODY
    entity_9 = 27;            // Tag.BODY
    entity_4 = 36;            // Tag.BODY
    char entity_0[37];        // Tag.BODY
    if(entity_9 < entity_3){  // Tag.BODY
    entity_9 = 70;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 25;            // Tag.BODY
    }                         // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_0[entity_9] = 'v'; // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 13;            // Tag.BODY
    entity_8[entity_4] = 'f'; // Tag.BUFWRITE_TAUT_SAFE
    char entity_7[4];         // Tag.BODY
    entity_7[entity_6] = 'Q'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER