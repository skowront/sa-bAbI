#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_1 = 15;              // Tag.BODY
    char entity_3[68];          // Tag.BODY
    entity_4 = 7;               // Tag.BODY
    while(entity_1 < entity_4){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_1] = 'Y';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER