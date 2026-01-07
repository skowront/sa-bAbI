#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_5[92];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_9 = 79;            // Tag.BODY
    char entity_3[92];        // Tag.BODY
    entity_0 = 73;            // Tag.BODY
    entity_6 = 34;            // Tag.BODY
    entity_5[entity_6] = 'p'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_9 < entity_0){  // Tag.BODY
    entity_9 = 0;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 93;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_9] = 'Z'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER