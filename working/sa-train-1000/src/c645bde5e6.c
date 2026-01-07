#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_3[21];          // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 48;              // Tag.BODY
    entity_9 = 35;              // Tag.BODY
    while(entity_9 < entity_5){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_9] = 'K';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER