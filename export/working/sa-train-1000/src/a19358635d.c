#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_6[98];        // Tag.BODY
    entity_8 = 79;            // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    if(entity_3 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 15;            // Tag.BODY
    }                         // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_6[entity_3] = 'R'; // Tag.BUFWRITE_COND_SAFE
    entity_9 = 19;            // Tag.BODY
    char entity_5[0];         // Tag.BODY
    entity_5[entity_9] = 'C'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER