#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_1[7];           // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_3 = 37;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    entity_4 = 57;              // Tag.BODY
    char entity_7[41];          // Tag.BODY
    char entity_6[66];          // Tag.BODY
    entity_6[entity_3] = 'A';   // Tag.BUFWRITE_TAUT_SAFE
    entity_9 = 27;              // Tag.BODY
    entity_2 = 63;              // Tag.BODY
    if (entity_8 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 95;              // Tag.BODY
    entity_1[entity_2] = '4';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    while(entity_4 < entity_8){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_4] = 'z';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER