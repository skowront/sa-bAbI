#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_9[4];         // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_5 = 84;            // Tag.BODY
    char entity_8[62];        // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_1[26];        // Tag.BODY
    entity_3 = 89;            // Tag.BODY
    entity_6 = 82;            // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    if(entity_0 < entity_5){  // Tag.BODY
    entity_1[entity_6] = 'm'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_0 = 15;            // Tag.BODY
    entity_9[entity_3] = 'L'; // Tag.BUFWRITE_TAUT_UNSAFE
    }                         // Tag.BODY
    entity_8[entity_0] = 'u'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER