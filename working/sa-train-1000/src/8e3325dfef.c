#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_6[39];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_8 = 55;            // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_2[93];        // Tag.BODY
    entity_4 = 20;            // Tag.BODY
    entity_0 = 48;            // Tag.BODY
    if(entity_0 < entity_8){  // Tag.BODY
    entity_0 = 95;            // Tag.BODY
    entity_6[entity_4] = 'd'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_0 = 51;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_0] = 'u'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER