#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_5[21];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_2 = 37;              // Tag.BODY
    char entity_3[26];          // Tag.BODY
    entity_1 = 85;              // Tag.BODY
    entity_7 = 81;              // Tag.BODY
    if (entity_0 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 29;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_0){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_2] = '3';   // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_6;               // Tag.BODY
    char entity_8[32];          // Tag.BODY
    entity_6 = 72;              // Tag.BODY
    entity_5[entity_7] = 'h';   // Tag.BUFWRITE_COND_UNSAFE
    entity_8[entity_6] = 'C';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER