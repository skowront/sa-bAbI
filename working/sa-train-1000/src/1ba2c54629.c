#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_4 = 54;              // Tag.BODY
    entity_9 = 13;              // Tag.BODY
    char entity_6[88];          // Tag.BODY
    while(entity_4 < entity_9){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_4] = 'j';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER