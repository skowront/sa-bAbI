#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_1[82];          // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_5[17];          // Tag.BODY
    entity_3 = 20;              // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_8 = 95;              // Tag.BODY
    entity_2 = 7;               // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    if (entity_6 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 39;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_6){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_1[entity_8] = '2';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_2] = 'A';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_0[10];          // Tag.BODY
    entity_7 = 65;              // Tag.BODY
    entity_0[entity_7] = 'z';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER