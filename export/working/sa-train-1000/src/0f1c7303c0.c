#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_8 = 59;              // Tag.BODY
    char entity_3[83];          // Tag.BODY
    entity_1 = 59;              // Tag.BODY
    while(entity_1 < entity_8){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_4[22];          // Tag.BODY
    entity_3[entity_1] = '6';   // Tag.BUFWRITE_COND_SAFE
    int entity_9;               // Tag.BODY
    entity_9 = 14;              // Tag.BODY
    entity_4[entity_9] = '0';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER