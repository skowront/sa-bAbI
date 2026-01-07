#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_7[97];        // Tag.BODY
    entity_1 = 49;            // Tag.BODY
    entity_3 = 34;            // Tag.BODY
    if(entity_1 < entity_3){  // Tag.BODY
    entity_1 = 89;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 71;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_1] = 'a'; // Tag.BUFWRITE_COND_SAFE
    int entity_2;             // Tag.BODY
    char entity_0[86];        // Tag.BODY
    entity_2 = 84;            // Tag.BODY
    entity_0[entity_2] = 'R'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER