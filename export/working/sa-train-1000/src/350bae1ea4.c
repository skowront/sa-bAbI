#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    char entity_7[16];          // Tag.BODY
    char entity_4[50];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 90;              // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_2 = 57;              // Tag.BODY
    entity_9 = 58;              // Tag.BODY
    entity_7[entity_9] = 'D';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_2 < entity_6){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_1[99];          // Tag.BODY
    entity_4[entity_2] = 'B';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_0;               // Tag.BODY
    entity_0 = 69;              // Tag.BODY
    entity_1[entity_0] = 'a';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER