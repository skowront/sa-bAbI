#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    char entity_8[1];         // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_2 = 57;            // Tag.BODY
    char entity_5[53];        // Tag.BODY
    char entity_6[95];        // Tag.BODY
    entity_3 = 41;            // Tag.BODY
    entity_7 = 92;            // Tag.BODY
    entity_9 = 21;            // Tag.BODY
    if(entity_9 < entity_3){  // Tag.BODY
    entity_8[entity_7] = 'p'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 24;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 50;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_9] = '3'; // Tag.BUFWRITE_COND_SAFE
    entity_6[entity_2] = 'X'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER