#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_6 = 97;              // Tag.BODY
    entity_3 = 41;              // Tag.BODY
    char entity_4[41];          // Tag.BODY
    while(entity_6 < entity_3){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_6] = 'j';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER