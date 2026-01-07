#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_6[30];          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 98;              // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_6[entity_2] = 'k';   // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_0;               // Tag.BODY
    char entity_5[79];          // Tag.BODY
    entity_3 = 29;              // Tag.BODY
    entity_0 = 12;              // Tag.BODY
    while(entity_0 < entity_3){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 50;              // Tag.BODY
    entity_5[entity_0] = '0';   // Tag.BUFWRITE_COND_SAFE
    char entity_8[7];           // Tag.BODY
    entity_8[entity_9] = 'a';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER