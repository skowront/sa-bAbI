#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_2[61];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    entity_9 = 82;            // Tag.BODY
    entity_3 = 41;            // Tag.BODY
    char entity_8[78];        // Tag.BODY
    if(entity_1 < entity_3){  // Tag.BODY
    entity_2[entity_9] = 'a'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_1 = 38;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_1] = 'V'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER