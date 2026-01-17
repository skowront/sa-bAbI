#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_4[37];          // Tag.BODY
    entity_3 = 35;              // Tag.BODY
    entity_9 = 46;              // Tag.BODY
    while(entity_9 < entity_3){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_9] = 'T';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER