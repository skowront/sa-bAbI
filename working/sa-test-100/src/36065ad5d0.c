#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    entity_8 = 12;            // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 22;            // Tag.BODY
    char entity_0[62];        // Tag.BODY
    if(entity_8 < entity_1){  // Tag.BODY
    entity_8 = 23;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 57;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_8] = '9'; // Tag.BUFWRITE_COND_SAFE
    int entity_9;             // Tag.BODY
    entity_9 = 71;            // Tag.BODY
    char entity_7[86];        // Tag.BODY
    entity_7[entity_9] = 'X'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER