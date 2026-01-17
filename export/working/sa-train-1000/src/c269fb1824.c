#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_1 = 91;              // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    char entity_9[41];          // Tag.BODY
    entity_6 = 94;              // Tag.BODY
    if (entity_4 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 83;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_4){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_1] = 'l';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER