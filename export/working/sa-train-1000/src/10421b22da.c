#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_5;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_2 = 38;            // Tag.BODY
    entity_0 = 34;            // Tag.BODY
    char entity_9[87];        // Tag.BODY
    char entity_6[5];         // Tag.BODY
    entity_5 = 23;            // Tag.BODY
    if(entity_0 < entity_2){  // Tag.BODY
    entity_0 = 43;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 11;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_0] = 'l'; // Tag.BUFWRITE_COND_UNSAFE
    entity_9[entity_5] = 'g'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER