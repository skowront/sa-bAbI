#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    entity_2 = 67;            // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_1[58];        // Tag.BODY
    entity_0 = 0;             // Tag.BODY
    if(entity_2 < entity_0){  // Tag.BODY
    entity_2 = 9;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 52;            // Tag.BODY
    }                         // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 91;            // Tag.BODY
    entity_1[entity_2] = 'E'; // Tag.BUFWRITE_COND_SAFE
    char entity_3[24];        // Tag.BODY
    entity_8 = 37;            // Tag.BODY
    entity_3[entity_7] = 'v'; // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_9[68];        // Tag.BODY
    entity_9[entity_8] = 'S'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER