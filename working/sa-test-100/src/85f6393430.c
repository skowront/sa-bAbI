#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_2[93];        // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_0[85];        // Tag.BODY
    entity_4 = 12;            // Tag.BODY
    entity_1 = 63;            // Tag.BODY
    entity_8 = 68;            // Tag.BODY
    if(entity_4 < entity_1){  // Tag.BODY
    entity_4 = 16;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 23;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_8] = 'Q'; // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_4] = 'z'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER