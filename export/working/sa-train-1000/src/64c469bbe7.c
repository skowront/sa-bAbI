#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_7[77];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 30;            // Tag.BODY
    entity_9 = 52;            // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    char entity_0[99];        // Tag.BODY
    if(entity_1 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 99;            // Tag.BODY
    entity_7[entity_9] = 'X'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    entity_0[entity_1] = 'B'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER