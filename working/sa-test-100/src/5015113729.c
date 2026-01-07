#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 83;            // Tag.BODY
    char entity_1[63];        // Tag.BODY
    char entity_2[2];         // Tag.BODY
    entity_8 = 74;            // Tag.BODY
    if(entity_9 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 61;            // Tag.BODY
    }                         // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_2[entity_9] = 'V'; // Tag.BUFWRITE_COND_UNSAFE
    entity_1[entity_4] = 'N'; // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_0[29];        // Tag.BODY
    entity_5 = 12;            // Tag.BODY
    entity_0[entity_5] = 'f'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER