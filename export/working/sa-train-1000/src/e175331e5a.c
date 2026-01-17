#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_1 = 2;             // Tag.BODY
    char entity_2[89];        // Tag.BODY
    entity_0 = 5;             // Tag.BODY
    char entity_9[84];        // Tag.BODY
    entity_7 = 83;            // Tag.BODY
    if(entity_1 < entity_0){  // Tag.BODY
    entity_1 = 92;            // Tag.BODY
    entity_9[entity_7] = 'K'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_1 = 79;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_3[78];        // Tag.BODY
    entity_2[entity_1] = '6'; // Tag.BUFWRITE_COND_UNSAFE
    entity_4 = 73;            // Tag.BODY
    entity_3[entity_4] = 't'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER