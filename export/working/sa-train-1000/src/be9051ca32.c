#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_4[55];        // Tag.BODY
    entity_8 = 14;            // Tag.BODY
    entity_3 = 92;            // Tag.BODY
    if(entity_3 < entity_8){  // Tag.BODY
    entity_3 = 28;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 64;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_3] = 'u'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER