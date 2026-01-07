#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_4[57];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 32;            // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 10;            // Tag.BODY
    if(entity_7 < entity_0){  // Tag.BODY
    entity_7 = 47;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 4;             // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_7] = 'V'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER