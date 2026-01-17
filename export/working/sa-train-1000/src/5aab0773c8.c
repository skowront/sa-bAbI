#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    char entity_1[10];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 39;            // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    if(entity_5 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 75;            // Tag.BODY
    }                         // Tag.BODY
    char entity_9[81];        // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_7[32];        // Tag.BODY
    entity_1[entity_5] = 'S'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_0;             // Tag.BODY
    entity_2 = 39;            // Tag.BODY
    entity_9[entity_2] = 'G'; // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 52;            // Tag.BODY
    entity_7[entity_0] = 'Q'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER