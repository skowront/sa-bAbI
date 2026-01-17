#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    char entity_0[32];        // Tag.BODY
    entity_4 = 45;            // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 80;            // Tag.BODY
    if(entity_4 < entity_5){  // Tag.BODY
    entity_4 = 64;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 94;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_4] = '0'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER