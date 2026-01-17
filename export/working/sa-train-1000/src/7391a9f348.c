#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_6[12];          // Tag.BODY
    entity_1 = 74;              // Tag.BODY
    entity_7 = 26;              // Tag.BODY
    while(entity_7 < entity_1){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_7] = 'g';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER