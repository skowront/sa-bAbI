#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    char entity_6[50];        // Tag.BODY
    entity_8 = 7;             // Tag.BODY
    if(entity_9 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 82;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_9] = 'R'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_7;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 79;            // Tag.BODY
    char entity_5[33];        // Tag.BODY
    entity_7 = 77;            // Tag.BODY
    entity_5[entity_0] = 'X'; // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_3[98];        // Tag.BODY
    entity_3[entity_7] = 'O'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER