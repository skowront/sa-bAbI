#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_3[77];          // Tag.BODY
    entity_6 = 26;              // Tag.BODY
    entity_9 = 38;              // Tag.BODY
    while(entity_9 < entity_6){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_9] = 'x';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER