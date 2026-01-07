#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    char entity_7[51];        // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_2[39];        // Tag.BODY
    entity_5 = 24;            // Tag.BODY
    char entity_8[94];        // Tag.BODY
    entity_9 = 68;            // Tag.BODY
    entity_6 = 22;            // Tag.BODY
    entity_1 = 93;            // Tag.BODY
    if(entity_6 < entity_9){  // Tag.BODY
    entity_7[entity_1] = 'c'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 35;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2[entity_5] = 'X'; // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 23;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_6] = 'k'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER