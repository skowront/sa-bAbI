#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 95;              // Tag.BODY
    char entity_6[41];          // Tag.BODY
    entity_7 = 76;              // Tag.BODY
    while(entity_1 < entity_7){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_1] = 'u';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER