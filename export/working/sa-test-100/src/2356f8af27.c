#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_6[64];          // Tag.BODY
    entity_4 = 45;              // Tag.BODY
    entity_3 = 64;              // Tag.BODY
    while(entity_4 < entity_3){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_4] = 'E';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER