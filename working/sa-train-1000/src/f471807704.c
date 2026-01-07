#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_1[74];        // Tag.BODY
    entity_2 = 37;            // Tag.BODY
    entity_3 = 29;            // Tag.BODY
    entity_0 = 28;            // Tag.BODY
    char entity_4[34];        // Tag.BODY
    if(entity_2 < entity_3){  // Tag.BODY
    entity_4[entity_0] = 'S'; // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = 77;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 21;            // Tag.BODY
    }                         // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_1[entity_2] = 'F'; // Tag.BUFWRITE_COND_SAFE
    entity_7 = 95;            // Tag.BODY
    char entity_5[63];        // Tag.BODY
    entity_5[entity_7] = 'U'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER