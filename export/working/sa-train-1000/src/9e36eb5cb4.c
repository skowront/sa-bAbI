#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    entity_6 = 16;            // Tag.BODY
    char entity_8[97];        // Tag.BODY
    if(entity_3 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 35;            // Tag.BODY
    }                         // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_0[18];        // Tag.BODY
    char entity_1[97];        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_7 = 80;            // Tag.BODY
    entity_5 = 3;             // Tag.BODY
    entity_1[entity_7] = 'K'; // Tag.BUFWRITE_TAUT_SAFE
    entity_8[entity_3] = 'N'; // Tag.BUFWRITE_COND_SAFE
    entity_0[entity_5] = 'C'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER