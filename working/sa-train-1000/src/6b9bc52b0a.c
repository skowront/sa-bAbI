#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_3[90];        // Tag.BODY
    entity_9 = 36;            // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 84;            // Tag.BODY
    if(entity_9 < entity_2){  // Tag.BODY
    entity_9 = 92;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 89;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_9] = 'z'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER