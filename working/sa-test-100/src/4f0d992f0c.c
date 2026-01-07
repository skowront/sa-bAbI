#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_6[12];          // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_0[16];          // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_7 = 13;              // Tag.BODY
    entity_3 = 52;              // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    entity_1 = 57;              // Tag.BODY
    if (entity_5 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 83;              // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_3] = 'm';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_1 < entity_5){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_1] = 'x';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER