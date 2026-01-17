#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_0[32];          // Tag.BODY
    entity_3 = 60;              // Tag.BODY
    entity_8 = 97;              // Tag.BODY
    while(entity_3 < entity_8){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_3] = 'U';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER