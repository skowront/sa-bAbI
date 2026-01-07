#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    entity_5 = 17;            // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 11;            // Tag.BODY
    char entity_2[64];        // Tag.BODY
    if(entity_5 < entity_8){  // Tag.BODY
    entity_5 = 47;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 73;            // Tag.BODY
    }                         // Tag.BODY
    char entity_4[19];        // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_2[entity_5] = 'q'; // Tag.BUFWRITE_COND_UNSAFE
    entity_9 = 97;            // Tag.BODY
    entity_4[entity_9] = 'i'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER