#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_8[12];        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    entity_9 = 42;            // Tag.BODY
    if(entity_1 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 82;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_1] = 'c'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER