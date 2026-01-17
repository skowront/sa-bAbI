#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    char entity_7[76];        // Tag.BODY
    entity_0 = 51;            // Tag.BODY
    int entity_5;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_6[14];        // Tag.BODY
    entity_5 = 55;            // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    if(entity_2 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 44;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_5] = 'U'; // Tag.BUFWRITE_TAUT_SAFE
    int entity_8;             // Tag.BODY
    entity_6[entity_2] = 'B'; // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 68;            // Tag.BODY
    char entity_9[90];        // Tag.BODY
    entity_9[entity_8] = 'n'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER