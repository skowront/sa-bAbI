#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_8[78];          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_3 = 75;              // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    entity_1 = 89;              // Tag.BODY
    if (entity_9 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 40;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_9){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_3] = 'W';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER