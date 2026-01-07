#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_5 = 53;            // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_3[27];        // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    char entity_6[93];        // Tag.BODY
    entity_1 = 84;            // Tag.BODY
    entity_3[entity_1] = 'n'; // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_9 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 88;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_9] = 'J'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER