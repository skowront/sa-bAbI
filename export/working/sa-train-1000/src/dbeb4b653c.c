#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    char entity_7[55];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_8 = 22;              // Tag.BODY
    entity_0 = 31;              // Tag.BODY
    while(entity_8 < entity_0){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_4[81];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_7[entity_8] = 'Z';   // Tag.BUFWRITE_COND_SAFE
    int entity_1;               // Tag.BODY
    entity_1 = 11;              // Tag.BODY
    entity_6 = 38;              // Tag.BODY
    char entity_2[27];          // Tag.BODY
    entity_4[entity_1] = 'u';   // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_6] = '7';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER