#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 75;            // Tag.BODY
    entity_0 = 26;            // Tag.BODY
    char entity_2[90];        // Tag.BODY
    if(entity_4 < entity_0){  // Tag.BODY
    entity_4 = 6;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 49;            // Tag.BODY
    }                         // Tag.BODY
    char entity_7[81];        // Tag.BODY
    entity_2[entity_4] = '2'; // Tag.BUFWRITE_COND_SAFE
    int entity_5;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 6;             // Tag.BODY
    entity_5 = 86;            // Tag.BODY
    char entity_6[58];        // Tag.BODY
    entity_7[entity_5] = 'b'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6[entity_3] = 'E'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER