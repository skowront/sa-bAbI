#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    char entity_6[17];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 56;              // Tag.BODY
    entity_2 = 31;              // Tag.BODY
    while(entity_2 < entity_9){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_2] = 'T';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_7;               // Tag.BODY
    char entity_3[87];          // Tag.BODY
    entity_7 = 24;              // Tag.BODY
    entity_3[entity_7] = 'a';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER