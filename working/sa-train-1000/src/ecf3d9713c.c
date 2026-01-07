#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_4 = 94;              // Tag.BODY
    entity_2 = 1;               // Tag.BODY
    char entity_8[57];          // Tag.BODY
    while(entity_4 < entity_2){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_4] = 'q';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_5;               // Tag.BODY
    char entity_9[37];          // Tag.BODY
    entity_5 = 99;              // Tag.BODY
    entity_9[entity_5] = 'U';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER