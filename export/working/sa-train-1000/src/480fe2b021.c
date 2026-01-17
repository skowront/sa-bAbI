#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    char entity_8[62];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 37;              // Tag.BODY
    entity_1 = 86;              // Tag.BODY
    while(entity_9 < entity_1){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_4[59];          // Tag.BODY
    entity_5 = 38;              // Tag.BODY
    entity_8[entity_9] = 'B';   // Tag.BUFWRITE_COND_UNSAFE
    entity_3 = 47;              // Tag.BODY
    char entity_6[11];          // Tag.BODY
    entity_6[entity_5] = '7';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4[entity_3] = 'W';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER