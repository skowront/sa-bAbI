#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_3 = 23;            // Tag.BODY
    char entity_7[83];        // Tag.BODY
    entity_6 = 93;            // Tag.BODY
    char entity_0[74];        // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    if(entity_2 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 97;            // Tag.BODY
    entity_0[entity_3] = 'P'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    entity_7[entity_2] = 'q'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_8;             // Tag.BODY
    entity_8 = 3;             // Tag.BODY
    char entity_9[3];         // Tag.BODY
    entity_9[entity_8] = 'v'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER