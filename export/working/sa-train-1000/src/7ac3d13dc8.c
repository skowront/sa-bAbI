#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_5[89];        // Tag.BODY
    char entity_6[71];        // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_0 = 24;            // Tag.BODY
    entity_9 = 39;            // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    if(entity_3 < entity_0){  // Tag.BODY
    entity_6[entity_9] = '2'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_3 = 40;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_3] = 'l'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER