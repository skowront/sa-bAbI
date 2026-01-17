#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_9[34];        // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_8 = 71;            // Tag.BODY
    char entity_5[34];        // Tag.BODY
    entity_3 = 95;            // Tag.BODY
    if(entity_2 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 74;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_3] = 'F'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9[entity_2] = 's'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER