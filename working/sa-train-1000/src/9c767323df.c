#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    entity_3 = 10;            // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_2[63];        // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    if(entity_0 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 34;            // Tag.BODY
    }                         // Tag.BODY
    char entity_1[4];         // Tag.BODY
    entity_2[entity_0] = 'u'; // Tag.BUFWRITE_COND_SAFE
    int entity_8;             // Tag.BODY
    entity_8 = 30;            // Tag.BODY
    entity_1[entity_8] = 'R'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER