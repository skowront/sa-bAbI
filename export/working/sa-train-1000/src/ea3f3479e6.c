#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    char entity_2[98];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 17;            // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    if(entity_5 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 97;            // Tag.BODY
    }                         // Tag.BODY
    char entity_3[95];        // Tag.BODY
    entity_2[entity_5] = 'D'; // Tag.BUFWRITE_COND_SAFE
    int entity_7;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_7 = 75;            // Tag.BODY
    char entity_8[79];        // Tag.BODY
    entity_9 = 86;            // Tag.BODY
    entity_3[entity_7] = 'R'; // Tag.BUFWRITE_TAUT_SAFE
    entity_8[entity_9] = 'X'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER