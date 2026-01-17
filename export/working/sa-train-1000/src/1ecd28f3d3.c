#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 46;            // Tag.BODY
    char entity_9[82];        // Tag.BODY
    entity_4 = 87;            // Tag.BODY
    if(entity_5 < entity_4){  // Tag.BODY
    entity_5 = 12;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 12;            // Tag.BODY
    }                         // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 74;            // Tag.BODY
    char entity_7[94];        // Tag.BODY
    entity_7[entity_8] = 'g'; // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_5] = 'v'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER