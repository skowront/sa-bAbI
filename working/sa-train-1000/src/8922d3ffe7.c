#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_5[73];          // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_9 = 22;              // Tag.BODY
    entity_8 = 26;              // Tag.BODY
    while(entity_8 < entity_9){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_8] = 'u';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER