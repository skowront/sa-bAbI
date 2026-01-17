#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_3[20];        // Tag.BODY
    entity_7 = 43;            // Tag.BODY
    entity_9 = 57;            // Tag.BODY
    if(entity_7 < entity_9){  // Tag.BODY
    entity_7 = 12;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 37;            // Tag.BODY
    }                         // Tag.BODY
    char entity_5[82];        // Tag.BODY
    char entity_2[58];        // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_6 = 22;            // Tag.BODY
    entity_2[entity_6] = 's'; // Tag.BUFWRITE_TAUT_SAFE
    entity_8 = 71;            // Tag.BODY
    entity_5[entity_8] = '9'; // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_7] = 't'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER