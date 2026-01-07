#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    char entity_8[3];           // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_3 = 82;              // Tag.BODY
    entity_2 = 21;              // Tag.BODY
    while(entity_3 < entity_2){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_3] = 'U';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER