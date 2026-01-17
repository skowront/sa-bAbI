#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    entity_4 = 4;             // Tag.BODY
    char entity_6[94];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 87;            // Tag.BODY
    if(entity_4 < entity_8){  // Tag.BODY
    entity_4 = 27;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 62;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_4] = 'M'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER