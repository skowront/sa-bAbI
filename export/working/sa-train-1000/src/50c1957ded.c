#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_4[53];          // Tag.BODY
    char entity_2[35];          // Tag.BODY
    entity_5 = 94;              // Tag.BODY
    entity_8 = 80;              // Tag.BODY
    entity_0 = 59;              // Tag.BODY
    while(entity_5 < entity_8){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_5] = 'y';   // Tag.BUFWRITE_COND_UNSAFE
    entity_4[entity_0] = 'a';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER