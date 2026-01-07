#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_3[82];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 29;            // Tag.BODY
    entity_9 = 35;            // Tag.BODY
    if(entity_9 < entity_8){  // Tag.BODY
    entity_9 = 31;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 34;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 4;             // Tag.BODY
    entity_3[entity_9] = 'H'; // Tag.BUFWRITE_COND_SAFE
    char entity_2[27];        // Tag.BODY
    entity_2[entity_4] = 'B'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER