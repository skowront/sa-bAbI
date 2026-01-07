#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    entity_9 = 87;              // Tag.BODY
    char entity_4[17];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 13;              // Tag.BODY
    while(entity_6 < entity_9){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_6] = 'f';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER