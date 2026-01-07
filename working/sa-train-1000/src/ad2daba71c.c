#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_8[74];          // Tag.BODY
    char entity_0[3];           // Tag.BODY
    entity_2 = 69;              // Tag.BODY
    entity_3 = 64;              // Tag.BODY
    entity_5 = 95;              // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    entity_0[entity_3] = 'H';   // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_6 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 16;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_6){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 76;              // Tag.BODY
    entity_8[entity_5] = 'W';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_7[2];           // Tag.BODY
    entity_7[entity_1] = 'b';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER