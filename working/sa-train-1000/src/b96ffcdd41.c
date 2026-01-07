#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_6[7];           // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_5[93];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_7 = 48;              // Tag.BODY
    entity_4 = 63;              // Tag.BODY
    entity_8 = 94;              // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    if (entity_3 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 99;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_3){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_8] = 's';   // Tag.BUFWRITE_COND_UNSAFE
    entity_6[entity_4] = 'o';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER