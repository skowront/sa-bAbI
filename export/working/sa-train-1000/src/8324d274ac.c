#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    char entity_7[74];          // Tag.BODY
    char entity_2[14];          // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_4[83];          // Tag.BODY
    entity_3 = 45;              // Tag.BODY
    entity_5 = 4;               // Tag.BODY
    entity_9 = 34;              // Tag.BODY
    entity_2[entity_3] = 'i';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 58;              // Tag.BODY
    while(entity_5 < entity_9){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_5] = '2';   // Tag.BUFWRITE_COND_SAFE
    entity_7[entity_1] = 'j';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER