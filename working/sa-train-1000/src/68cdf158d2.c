#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_7[40];          // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    entity_3 = 97;              // Tag.BODY
    entity_1 = 37;              // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_4[83];          // Tag.BODY
    entity_0 = 11;              // Tag.BODY
    if (entity_6 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7[entity_0] = 'C';   // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 11;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_6){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_3] = 'w';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER