#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    char entity_0[59];        // Tag.BODY
    entity_4 = 17;            // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 13;            // Tag.BODY
    if(entity_4 < entity_5){  // Tag.BODY
    entity_4 = 80;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 44;            // Tag.BODY
    }                         // Tag.BODY
    char entity_8[78];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_0[entity_4] = 'w'; // Tag.BUFWRITE_COND_SAFE
    entity_3 = 39;            // Tag.BODY
    entity_8[entity_3] = 'u'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER