#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_0 = 81;            // Tag.BODY
    char entity_8[20];        // Tag.BODY
    entity_9 = 3;             // Tag.BODY
    char entity_7[6];         // Tag.BODY
    if(entity_4 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 99;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_4] = 'q'; // Tag.BUFWRITE_COND_UNSAFE
    entity_8[entity_9] = 'k'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER