#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 95;            // Tag.BODY
    char entity_2[59];        // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_4[52];        // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    entity_7 = 22;            // Tag.BODY
    if(entity_9 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 39;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_9] = 'I'; // Tag.BUFWRITE_COND_UNSAFE
    entity_4[entity_7] = 'G'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER