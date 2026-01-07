#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_1[72];          // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_2[86];          // Tag.BODY
    entity_8 = 91;              // Tag.BODY
    entity_4 = 55;              // Tag.BODY
    entity_3 = 39;              // Tag.BODY
    while(entity_8 < entity_4){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_8] = 'e';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_9;               // Tag.BODY
    char entity_7[45];          // Tag.BODY
    entity_1[entity_3] = '5';   // Tag.BUFWRITE_TAUT_SAFE
    entity_9 = 89;              // Tag.BODY
    entity_7[entity_9] = 'Y';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER