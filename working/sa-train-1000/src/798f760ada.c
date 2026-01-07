#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    entity_9 = 58;              // Tag.BODY
    entity_2 = 13;              // Tag.BODY
    char entity_6[63];          // Tag.BODY
    if (entity_1 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 74;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_1){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_9] = 'a';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER