#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    entity_3 = 47;              // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_4[38];          // Tag.BODY
    entity_5 = 79;              // Tag.BODY
    while(entity_3 < entity_5){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_3] = 'l';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER