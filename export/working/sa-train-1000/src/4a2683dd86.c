#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_2[22];        // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_9 = 71;            // Tag.BODY
    entity_5 = 10;            // Tag.BODY
    if(entity_9 < entity_5){  // Tag.BODY
    entity_9 = 33;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 25;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_9] = 'P'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER