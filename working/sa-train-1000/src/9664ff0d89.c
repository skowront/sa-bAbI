#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_8[57];          // Tag.BODY
    entity_0 = 61;              // Tag.BODY
    entity_9 = 26;              // Tag.BODY
    while(entity_0 < entity_9){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_0] = 'I';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER