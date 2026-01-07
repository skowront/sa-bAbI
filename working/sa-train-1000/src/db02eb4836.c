#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_8[84];          // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_6 = 97;              // Tag.BODY
    entity_1 = 50;              // Tag.BODY
    while(entity_1 < entity_6){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_1] = 'n';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER