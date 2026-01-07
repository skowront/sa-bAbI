#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_0 = 27;            // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    char entity_1[65];        // Tag.BODY
    if(entity_8 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 51;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_8] = 'v'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER