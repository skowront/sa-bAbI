#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_6 = 50;              // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_5[32];          // Tag.BODY
    entity_2 = 67;              // Tag.BODY
    char entity_7[41];          // Tag.BODY
    entity_0 = 35;              // Tag.BODY
    while(entity_0 < entity_2){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_5[entity_0] = 'n';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[50];          // Tag.BODY
    entity_7[entity_6] = 'Z';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 3;               // Tag.BODY
    entity_3[entity_9] = 'N';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER