#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_0[89];          // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_8 = 73;              // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_9 = 76;              // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    if (entity_4 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 27;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_4){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_8] = 'x';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER