#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_3 = 70;              // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_7[3];           // Tag.BODY
    char entity_4[12];          // Tag.BODY
    entity_0 = 27;              // Tag.BODY
    entity_9 = 67;              // Tag.BODY
    entity_7[entity_9] = 'N';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_3 < entity_0){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_3] = 'B';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER