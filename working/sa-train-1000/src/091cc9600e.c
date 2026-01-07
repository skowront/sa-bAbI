#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    char entity_8[26];        // Tag.BODY
    char entity_6[79];        // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_0 = 84;            // Tag.BODY
    entity_3 = 43;            // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    if(entity_9 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 76;            // Tag.BODY
    }                         // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 94;            // Tag.BODY
    entity_6[entity_0] = 'N'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_9] = 'S'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_4[83];        // Tag.BODY
    entity_4[entity_5] = 'W'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER