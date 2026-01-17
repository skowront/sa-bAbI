#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_7[85];        // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_3[69];        // Tag.BODY
    entity_0 = 28;            // Tag.BODY
    entity_4 = 15;            // Tag.BODY
    entity_5 = 76;            // Tag.BODY
    if(entity_0 < entity_4){  // Tag.BODY
    entity_0 = 55;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7[entity_5] = 'I'; // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 21;            // Tag.BODY
    }                         // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_8[68];        // Tag.BODY
    entity_6 = 81;            // Tag.BODY
    entity_8[entity_6] = 'E'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_0] = 'k'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER