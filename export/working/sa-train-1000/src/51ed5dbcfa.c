#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_0[17];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_5[19];          // Tag.BODY
    entity_7 = 88;              // Tag.BODY
    entity_8 = 5;               // Tag.BODY
    char entity_9[52];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 87;              // Tag.BODY
    entity_5[entity_6] = 'g';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 36;              // Tag.BODY
    while(entity_8 < entity_7){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    entity_9[entity_2] = 'F';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    entity_0[entity_8] = 'a';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER