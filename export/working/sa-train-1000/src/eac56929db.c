#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_2 = 48;              // Tag.BODY
    entity_3 = 70;              // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    char entity_9[43];          // Tag.BODY
    if (entity_6 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 20;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_6){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_3] = 'I';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER