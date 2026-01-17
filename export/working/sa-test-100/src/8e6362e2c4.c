#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_3[43];          // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_1 = 18;              // Tag.BODY
    entity_7 = 33;              // Tag.BODY
    while(entity_1 < entity_7){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_1] = 'g';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER