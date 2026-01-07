#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_6[93];        // Tag.BODY
    entity_8 = 1;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 53;            // Tag.BODY
    if(entity_4 < entity_8){  // Tag.BODY
    entity_4 = 41;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 56;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_4] = 'd'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER