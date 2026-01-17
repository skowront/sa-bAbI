#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_8[99];        // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_1[90];        // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    entity_6 = 14;            // Tag.BODY
    entity_2 = 37;            // Tag.BODY
    if(entity_0 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1[entity_2] = 'K'; // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 92;            // Tag.BODY
    }                         // Tag.BODY
    char entity_5[26];        // Tag.BODY
    entity_8[entity_0] = 'J'; // Tag.BUFWRITE_COND_SAFE
    int entity_4;             // Tag.BODY
    entity_4 = 53;            // Tag.BODY
    entity_5[entity_4] = 'b'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER