#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    char entity_2[2];           // Tag.BODY
    entity_7 = 82;              // Tag.BODY
    char entity_0[62];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 64;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 76;              // Tag.BODY
    char entity_1[36];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 36;              // Tag.BODY
    while(entity_3 < entity_5){ // Tag.BODY
    entity_1[entity_7] = 'w';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_8] = 'r';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_3] = '2';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER