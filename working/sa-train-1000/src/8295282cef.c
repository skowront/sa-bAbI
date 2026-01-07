#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_6 = 73;              // Tag.BODY
    char entity_1[79];          // Tag.BODY
    entity_9 = 32;              // Tag.BODY
    while(entity_9 < entity_6){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_9] = 'K';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER