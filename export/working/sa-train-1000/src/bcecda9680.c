#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    entity_9 = 31;            // Tag.BODY
    char entity_5[96];        // Tag.BODY
    if(entity_8 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 77;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_8] = 'X'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER