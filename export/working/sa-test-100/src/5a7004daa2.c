#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_2[9];           // Tag.BODY
    entity_8 = 18;              // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    entity_0 = 52;              // Tag.BODY
    if (entity_6 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 48;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_6){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_8] = 'R';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER