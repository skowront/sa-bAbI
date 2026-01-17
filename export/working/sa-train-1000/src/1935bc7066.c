#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_5[21];          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 31;              // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_8[72];          // Tag.BODY
    entity_6 = 51;              // Tag.BODY
    entity_4 = 6;               // Tag.BODY
    entity_5[entity_1] = 'K';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_6 < entity_4){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_6] = '0';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER