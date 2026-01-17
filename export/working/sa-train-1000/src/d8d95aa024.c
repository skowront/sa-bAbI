#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_0[67];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_5 = 40;            // Tag.BODY
    entity_4 = 4;             // Tag.BODY
    char entity_2[2];         // Tag.BODY
    entity_8 = 89;            // Tag.BODY
    entity_0[entity_4] = 'a'; // Tag.BUFWRITE_TAUT_SAFE
    char entity_9[87];        // Tag.BODY
    entity_7 = 79;            // Tag.BODY
    if(entity_5 < entity_7){  // Tag.BODY
    entity_5 = 2;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_9[entity_8] = 'm'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5 = 41;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_5] = 'q'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER