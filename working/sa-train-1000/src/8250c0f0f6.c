#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    char entity_1[5];           // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 80;              // Tag.BODY
    char entity_7[0];           // Tag.BODY
    entity_9 = 7;               // Tag.BODY
    entity_1[entity_2] = '6';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5 = 22;              // Tag.BODY
    while(entity_5 < entity_9){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_5] = 'O';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER