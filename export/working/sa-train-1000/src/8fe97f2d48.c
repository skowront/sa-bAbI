#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 62;            // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    char entity_5[23];        // Tag.BODY
    if(entity_0 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 28;            // Tag.BODY
    }                         // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 98;            // Tag.BODY
    entity_5[entity_0] = '0'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_2[46];        // Tag.BODY
    entity_2[entity_9] = 'y'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER