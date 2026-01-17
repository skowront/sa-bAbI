#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    char entity_5[5];         // Tag.BODY
    entity_9 = 29;            // Tag.BODY
    if(entity_3 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 95;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_3] = 'i'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER