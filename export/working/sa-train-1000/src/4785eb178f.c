#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 91;            // Tag.BODY
    char entity_7[80];        // Tag.BODY
    entity_0 = 33;            // Tag.BODY
    if(entity_3 < entity_0){  // Tag.BODY
    entity_3 = 77;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 92;            // Tag.BODY
    }                         // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 35;            // Tag.BODY
    entity_7[entity_3] = 'g'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[98];        // Tag.BODY
    entity_6[entity_8] = 'E'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER