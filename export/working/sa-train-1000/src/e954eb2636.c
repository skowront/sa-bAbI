#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_4 = 97;              // Tag.BODY
    char entity_1[80];          // Tag.BODY
    entity_0 = 2;               // Tag.BODY
    while(entity_0 < entity_4){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_0] = 'U';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER