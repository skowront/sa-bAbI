#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_6[72];          // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 88;              // Tag.BODY
    entity_8 = 13;              // Tag.BODY
    while(entity_0 < entity_8){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_0] = 'x';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER