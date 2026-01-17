#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_7 = 67;            // Tag.BODY
    entity_3 = 97;            // Tag.BODY
    char entity_1[66];        // Tag.BODY
    if(entity_7 < entity_3){  // Tag.BODY
    entity_7 = 43;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 49;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 92;            // Tag.BODY
    char entity_9[74];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_1[entity_7] = 'R'; // Tag.BUFWRITE_COND_SAFE
    char entity_0[86];        // Tag.BODY
    entity_0[entity_4] = 'y'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 6;             // Tag.BODY
    entity_9[entity_2] = 'A'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER