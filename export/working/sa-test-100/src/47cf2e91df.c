#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_8[76];        // Tag.BODY
    entity_9 = 75;            // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    if(entity_6 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 16;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_6] = 'H'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER