#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_2[16];          // Tag.BODY
    entity_3 = 94;              // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_1[18];          // Tag.BODY
    entity_6 = 35;              // Tag.BODY
    entity_4 = 0;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    if (entity_0 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 32;              // Tag.BODY
    entity_2[entity_6] = 'Z';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    while(entity_3 < entity_0){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_1[entity_3] = 'H';   // Tag.BUFWRITE_COND_UNSAFE
    entity_7 = 80;              // Tag.BODY
    char entity_5[25];          // Tag.BODY
    entity_5[entity_7] = '6';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER