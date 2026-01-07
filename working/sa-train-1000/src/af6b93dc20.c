#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_1 = 40;              // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_9[13];          // Tag.BODY
    entity_3 = 15;              // Tag.BODY
    if (entity_5 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 21;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_5){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_3] = 'z';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER