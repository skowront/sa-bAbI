#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_2[20];          // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_8[50];          // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_1[14];          // Tag.BODY
    entity_6 = 64;              // Tag.BODY
    entity_4 = 92;              // Tag.BODY
    entity_5 = 60;              // Tag.BODY
    entity_9 = 75;              // Tag.BODY
    while(entity_5 < entity_6){ // Tag.BODY
    entity_2[entity_9] = 'r';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_5] = 'u';   // Tag.BUFWRITE_COND_UNSAFE
    entity_8[entity_4] = '1';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER