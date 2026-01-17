#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 31;              // Tag.BODY
    entity_5 = 54;              // Tag.BODY
    char entity_9[0];           // Tag.BODY
    while(entity_5 < entity_3){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_5] = 'j';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER