#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_9[73];        // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    entity_8 = 56;            // Tag.BODY
    if(entity_5 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 41;            // Tag.BODY
    }                         // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_9[entity_5] = '1'; // Tag.BUFWRITE_COND_SAFE
    char entity_0[74];        // Tag.BODY
    entity_2 = 79;            // Tag.BODY
    entity_1 = 26;            // Tag.BODY
    char entity_7[88];        // Tag.BODY
    entity_7[entity_2] = 'M'; // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_1] = 'Y'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER