#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_7[4];           // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    entity_4 = 39;              // Tag.BODY
    entity_9 = 48;              // Tag.BODY
    if (entity_5 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 53;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_5){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_2[70];          // Tag.BODY
    char entity_3[9];           // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_7[entity_4] = 'k';   // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 66;              // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 89;              // Tag.BODY
    entity_2[entity_1] = 'X';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_6] = 'V';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER