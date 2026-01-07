#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_9[57];        // Tag.BODY
    entity_1 = 77;            // Tag.BODY
    entity_3 = 25;            // Tag.BODY
    if(entity_1 < entity_3){  // Tag.BODY
    entity_1 = 72;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 25;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_9[entity_1] = 'v'; // Tag.BUFWRITE_COND_SAFE
    entity_2 = 11;            // Tag.BODY
    char entity_0[31];        // Tag.BODY
    entity_0[entity_2] = 'T'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER