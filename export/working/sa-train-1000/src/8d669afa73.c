#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    entity_6 = 81;              // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_1[85];          // Tag.BODY
    char entity_4[51];          // Tag.BODY
    entity_9 = 11;              // Tag.BODY
    entity_8 = 50;              // Tag.BODY
    while(entity_8 < entity_9){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_6] = 'V';   // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_2;               // Tag.BODY
    entity_2 = 90;              // Tag.BODY
    entity_1[entity_8] = 'X';   // Tag.BUFWRITE_COND_SAFE
    char entity_7[35];          // Tag.BODY
    entity_7[entity_2] = 'W';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER