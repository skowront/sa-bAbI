#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 70;            // Tag.BODY
    entity_6 = 70;            // Tag.BODY
    char entity_4[89];        // Tag.BODY
    if(entity_9 < entity_6){  // Tag.BODY
    entity_9 = 93;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 6;             // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_9] = '0'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER