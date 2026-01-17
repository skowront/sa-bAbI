#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_9 = 27;              // Tag.BODY
    char entity_1[98];          // Tag.BODY
    entity_0 = 27;              // Tag.BODY
    while(entity_0 < entity_9){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_0] = 'l';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER