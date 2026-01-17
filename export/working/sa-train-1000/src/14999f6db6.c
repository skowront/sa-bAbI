#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    entity_0 = 32;            // Tag.BODY
    char entity_5[77];        // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 43;            // Tag.BODY
    char entity_8[65];        // Tag.BODY
    entity_3 = 9;             // Tag.BODY
    if(entity_0 < entity_3){  // Tag.BODY
    entity_0 = 76;            // Tag.BODY
    entity_5[entity_9] = 'o'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_0 = 15;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_0] = 'b'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER