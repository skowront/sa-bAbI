#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    char entity_7[94];        // Tag.BODY
    entity_6 = 27;            // Tag.BODY
    int entity_5;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 57;            // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_9[64];        // Tag.BODY
    char entity_3[46];        // Tag.BODY
    entity_5 = 64;            // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    entity_9[entity_6] = 'F'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_1 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 89;            // Tag.BODY
    entity_7[entity_5] = 'H'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    entity_3[entity_1] = 'K'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER