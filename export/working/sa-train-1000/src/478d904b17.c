#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    char entity_8[96];        // Tag.BODY
    entity_9 = 93;            // Tag.BODY
    if(entity_0 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 46;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_0] = 'l'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER