#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    char entity_9[26];          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_6 = 32;              // Tag.BODY
    entity_2 = 29;              // Tag.BODY
    while(entity_6 < entity_2){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 61;              // Tag.BODY
    char entity_4[92];          // Tag.BODY
    entity_4[entity_0] = 'D';   // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_6] = '7';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER