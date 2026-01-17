#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    entity_5 = 50;            // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 63;            // Tag.BODY
    char entity_0[74];        // Tag.BODY
    if(entity_5 < entity_6){  // Tag.BODY
    entity_5 = 85;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 81;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_5] = 'n'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_1;             // Tag.BODY
    char entity_4[66];        // Tag.BODY
    entity_1 = 83;            // Tag.BODY
    entity_4[entity_1] = 'a'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER