#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_4[8];           // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 54;              // Tag.BODY
    char entity_5[8];           // Tag.BODY
    entity_1 = 97;              // Tag.BODY
    entity_6 = 7;               // Tag.BODY
    while(entity_6 < entity_1){ // Tag.BODY
    entity_4[entity_9] = '2';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_6] = 'F';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER