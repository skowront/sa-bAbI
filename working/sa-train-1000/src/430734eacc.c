#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    char entity_5[6];           // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 25;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_3 = 81;              // Tag.BODY
    if (entity_0 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 20;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_0){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_6[73];          // Tag.BODY
    entity_5[entity_4] = '7';   // Tag.BUFWRITE_COND_UNSAFE
    entity_2 = 26;              // Tag.BODY
    entity_6[entity_2] = 'r';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER