#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 92;            // Tag.BODY
    char entity_1[7];         // Tag.BODY
    entity_8 = 27;            // Tag.BODY
    if(entity_2 < entity_8){  // Tag.BODY
    entity_2 = 67;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 48;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_2] = 'u'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER