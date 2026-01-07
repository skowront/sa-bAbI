#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_0 = 35;              // Tag.BODY
    entity_3 = 4;               // Tag.BODY
    char entity_2[75];          // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    if (entity_6 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 97;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_6){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_3] = 'I';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER