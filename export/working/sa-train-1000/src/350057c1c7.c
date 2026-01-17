#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 63;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_6 = 34;              // Tag.BODY
    char entity_8[9];           // Tag.BODY
    char entity_7[2];           // Tag.BODY
    entity_5 = 7;               // Tag.BODY
    if (entity_0 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 12;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_0){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    entity_7[entity_6] = '3';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_8[entity_9] = 'C';   // Tag.BUFWRITE_COND_UNSAFE
    entity_1 = 64;              // Tag.BODY
    char entity_2[81];          // Tag.BODY
    entity_2[entity_1] = 'B';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER