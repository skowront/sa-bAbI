#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    char entity_7[95];          // Tag.BODY
    entity_9 = 94;              // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_5 = 91;              // Tag.BODY
    entity_1 = 62;              // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    char entity_4[36];          // Tag.BODY
    if (entity_2 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4[entity_1] = 'p';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 43;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_2){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_9] = 'W';   // Tag.BUFWRITE_COND_SAFE
    char entity_8[36];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 8;               // Tag.BODY
    entity_8[entity_6] = '2';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER