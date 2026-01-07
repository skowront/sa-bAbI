#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    char entity_3[12];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 93;              // Tag.BODY
    entity_6 = 38;              // Tag.BODY
    while(entity_6 < entity_9){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_6] = 'V';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER