#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_8[69];          // Tag.BODY
    entity_6 = 72;              // Tag.BODY
    entity_0 = 16;              // Tag.BODY
    while(entity_6 < entity_0){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_6] = 'l';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER