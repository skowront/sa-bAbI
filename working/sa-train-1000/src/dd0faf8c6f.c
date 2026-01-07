#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_5[52];        // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 41;            // Tag.BODY
    entity_8 = 41;            // Tag.BODY
    char entity_2[58];        // Tag.BODY
    entity_9 = 15;            // Tag.BODY
    if(entity_3 < entity_8){  // Tag.BODY
    entity_3 = 65;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2[entity_9] = 'b'; // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 75;            // Tag.BODY
    }                         // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_4[39];        // Tag.BODY
    entity_5[entity_3] = 'I'; // Tag.BUFWRITE_COND_UNSAFE
    entity_1 = 30;            // Tag.BODY
    entity_4[entity_1] = '2'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER