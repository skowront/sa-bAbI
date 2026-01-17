#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_5[10];          // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_6 = 31;              // Tag.BODY
    entity_9 = 24;              // Tag.BODY
    while(entity_9 < entity_6){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_9] = 'T';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER