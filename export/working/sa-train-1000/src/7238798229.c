#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    char entity_2[80];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 4;             // Tag.BODY
    entity_4 = 92;            // Tag.BODY
    if(entity_8 < entity_4){  // Tag.BODY
    entity_8 = 9;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 47;            // Tag.BODY
    }                         // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_3[94];        // Tag.BODY
    entity_2[entity_8] = 'b'; // Tag.BUFWRITE_COND_SAFE
    int entity_9;             // Tag.BODY
    entity_7 = 36;            // Tag.BODY
    entity_9 = 96;            // Tag.BODY
    char entity_1[55];        // Tag.BODY
    entity_1[entity_7] = 'b'; // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_9] = 'N'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER