#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    char entity_0[49];          // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_4[81];          // Tag.BODY
    entity_6 = 97;              // Tag.BODY
    entity_3 = 87;              // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 46;              // Tag.BODY
    if (entity_7 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 70;              // Tag.BODY
    entity_4[entity_6] = 'R';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    while(entity_3 < entity_7){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_1[7];           // Tag.BODY
    entity_0[entity_3] = 'P';   // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 70;              // Tag.BODY
    entity_1[entity_8] = 'I';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER