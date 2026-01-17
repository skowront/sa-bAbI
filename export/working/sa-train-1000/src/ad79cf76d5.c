#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_7 = 97;            // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_8[26];        // Tag.BODY
    char entity_9[46];        // Tag.BODY
    entity_1 = 22;            // Tag.BODY
    entity_5 = 84;            // Tag.BODY
    if(entity_1 < entity_5){  // Tag.BODY
    entity_1 = 2;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 68;            // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_9[entity_7] = 'O'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 60;            // Tag.BODY
    entity_8[entity_1] = 'F'; // Tag.BUFWRITE_COND_SAFE
    char entity_3[46];        // Tag.BODY
    entity_3[entity_0] = 'L'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER