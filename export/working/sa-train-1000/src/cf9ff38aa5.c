#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_9[75];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 76;              // Tag.BODY
    entity_7 = 71;              // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    if (entity_0 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 78;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_0){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 46;              // Tag.BODY
    entity_9[entity_7] = 'O';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[29];          // Tag.BODY
    entity_3[entity_4] = 'H';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER