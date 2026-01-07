#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_1[88];        // Tag.BODY
    entity_7 = 3;             // Tag.BODY
    entity_6 = 3;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_1[entity_6] = 'm'; // Tag.BUFWRITE_TAUT_SAFE
    char entity_8[63];        // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    if(entity_9 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 41;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_9] = 'K'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER