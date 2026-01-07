#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_6[64];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 54;            // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    entity_5 = 53;            // Tag.BODY
    char entity_7[73];        // Tag.BODY
    if(entity_9 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 40;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_9] = 'w'; // Tag.BUFWRITE_COND_SAFE
    entity_7[entity_3] = 'Z'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER