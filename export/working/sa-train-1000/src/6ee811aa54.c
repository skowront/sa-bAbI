#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_4[85];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_6 = 48;            // Tag.BODY
    entity_3 = 74;            // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    entity_9 = 67;            // Tag.BODY
    char entity_0[39];        // Tag.BODY
    char entity_1[52];        // Tag.BODY
    if(entity_8 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 69;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_8] = 'v'; // Tag.BUFWRITE_COND_UNSAFE
    entity_4[entity_9] = 'f'; // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_3] = 'E'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER