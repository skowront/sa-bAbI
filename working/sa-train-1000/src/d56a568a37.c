#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_0[49];          // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_2[57];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_7 = 77;              // Tag.BODY
    entity_3 = 20;              // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    entity_6 = 97;              // Tag.BODY
    if (entity_4 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 42;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_4){ // Tag.BODY
    entity_0[entity_7] = 'B';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_1[66];          // Tag.BODY
    entity_2[entity_3] = 'P';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_8;               // Tag.BODY
    entity_8 = 97;              // Tag.BODY
    entity_1[entity_8] = 'C';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER