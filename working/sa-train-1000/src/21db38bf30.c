#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    char entity_8[53];        // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_7[14];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_5 = 42;            // Tag.BODY
    entity_6 = 38;            // Tag.BODY
    entity_3 = 89;            // Tag.BODY
    if(entity_6 < entity_5){  // Tag.BODY
    entity_6 = 13;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 12;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_3] = 'v'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_6] = 'z'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER