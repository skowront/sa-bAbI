#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_4[66];        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_9 = 78;            // Tag.BODY
    entity_5 = 31;            // Tag.BODY
    if(entity_9 < entity_5){  // Tag.BODY
    entity_9 = 39;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 8;             // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_9] = 'Y'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER