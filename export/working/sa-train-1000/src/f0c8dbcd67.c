#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    char entity_9[97];        // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 82;            // Tag.BODY
    if(entity_5 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 67;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_5] = 'S'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER