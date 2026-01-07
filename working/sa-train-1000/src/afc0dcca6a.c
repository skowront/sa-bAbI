#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_4[3];         // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_7[51];        // Tag.BODY
    entity_6 = 50;            // Tag.BODY
    entity_1 = 70;            // Tag.BODY
    if(entity_9 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 49;            // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_7[entity_9] = 'Q'; // Tag.BUFWRITE_COND_SAFE
    entity_0 = 67;            // Tag.BODY
    char entity_5[38];        // Tag.BODY
    entity_5[entity_0] = 'G'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4[entity_1] = 'S'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER