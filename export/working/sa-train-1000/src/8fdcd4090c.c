#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    char entity_9[60];        // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_1[81];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_7 = 55;            // Tag.BODY
    entity_4 = 22;            // Tag.BODY
    entity_0 = 94;            // Tag.BODY
    if(entity_7 < entity_4){  // Tag.BODY
    entity_7 = 73;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9[entity_0] = 'C'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = 53;            // Tag.BODY
    }                         // Tag.BODY
    char entity_3[98];        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_1[entity_7] = 'S'; // Tag.BUFWRITE_COND_SAFE
    entity_5 = 96;            // Tag.BODY
    entity_3[entity_5] = 'g'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER