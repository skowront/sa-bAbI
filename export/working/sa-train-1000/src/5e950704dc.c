#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    entity_6 = 14;            // Tag.BODY
    char entity_9[91];        // Tag.BODY
    if(entity_8 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 2;             // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_8] = 'p'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER