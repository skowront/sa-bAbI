#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_7 = 82;              // Tag.BODY
    char entity_0[20];          // Tag.BODY
    entity_2 = 26;              // Tag.BODY
    while(entity_2 < entity_7){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_2] = 'R';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_6;               // Tag.BODY
    entity_6 = 51;              // Tag.BODY
    char entity_5[51];          // Tag.BODY
    entity_5[entity_6] = 'f';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER