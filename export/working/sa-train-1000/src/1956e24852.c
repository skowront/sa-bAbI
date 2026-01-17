#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_9[72];          // Tag.BODY
    char entity_5[43];          // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_3 = 85;              // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_4 = 82;              // Tag.BODY
    entity_1 = 65;              // Tag.BODY
    if (entity_7 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 14;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_7){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    entity_5[entity_1] = '0';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 79;              // Tag.BODY
    entity_9[entity_3] = '4';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_2[85];          // Tag.BODY
    entity_2[entity_6] = 't';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER