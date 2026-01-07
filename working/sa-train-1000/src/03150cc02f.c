#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_3[96];          // Tag.BODY
    entity_9 = 9;               // Tag.BODY
    entity_8 = 60;              // Tag.BODY
    char entity_7[17];          // Tag.BODY
    entity_6 = 40;              // Tag.BODY
    while(entity_6 < entity_9){ // Tag.BODY
    entity_7[entity_8] = 'N';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_6] = 'c';   // Tag.BUFWRITE_COND_SAFE
    char entity_2[0];           // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 99;              // Tag.BODY
    entity_2[entity_0] = '5';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER