#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_4[78];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_9 = 59;            // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    if(entity_1 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 72;            // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_4[entity_1] = 'L'; // Tag.BUFWRITE_COND_SAFE
    char entity_7[90];        // Tag.BODY
    entity_0 = 32;            // Tag.BODY
    entity_7[entity_0] = 'c'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER