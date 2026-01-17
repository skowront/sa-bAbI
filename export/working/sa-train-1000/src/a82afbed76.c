#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_3[17];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 5;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 56;            // Tag.BODY
    if(entity_0 < entity_8){  // Tag.BODY
    entity_0 = 76;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 29;            // Tag.BODY
    }                         // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_6[79];        // Tag.BODY
    entity_9 = 14;            // Tag.BODY
    entity_3[entity_0] = '3'; // Tag.BUFWRITE_COND_UNSAFE
    entity_6[entity_9] = 'x'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER