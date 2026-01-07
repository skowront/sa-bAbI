#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_5 = 69;            // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    char entity_9[46];        // Tag.BODY
    if(entity_2 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 11;            // Tag.BODY
    }                         // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_9[entity_2] = 'a'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_8[55];        // Tag.BODY
    entity_1 = 39;            // Tag.BODY
    entity_8[entity_1] = 'H'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER