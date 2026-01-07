#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_8[44];        // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 54;            // Tag.BODY
    entity_0 = 84;            // Tag.BODY
    if(entity_4 < entity_0){  // Tag.BODY
    entity_4 = 39;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 18;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_4] = 'i'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER