#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_7[69];        // Tag.BODY
    entity_9 = 66;            // Tag.BODY
    entity_5 = 23;            // Tag.BODY
    if(entity_9 < entity_5){  // Tag.BODY
    entity_9 = 91;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 76;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_9] = 'B'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER