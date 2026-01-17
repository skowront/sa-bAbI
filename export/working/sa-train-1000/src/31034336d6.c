#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_9[61];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_7 = 39;            // Tag.BODY
    entity_8 = 91;            // Tag.BODY
    entity_6 = 86;            // Tag.BODY
    char entity_1[87];        // Tag.BODY
    if(entity_8 < entity_6){  // Tag.BODY
    entity_8 = 45;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 15;            // Tag.BODY
    entity_9[entity_7] = 's'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    char entity_0[61];        // Tag.BODY
    entity_1[entity_8] = 'P'; // Tag.BUFWRITE_COND_SAFE
    int entity_5;             // Tag.BODY
    entity_5 = 20;            // Tag.BODY
    entity_0[entity_5] = 'w'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER