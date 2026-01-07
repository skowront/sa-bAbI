#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_6[10];        // Tag.BODY
    entity_9 = 36;            // Tag.BODY
    if(entity_4 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 73;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_4] = 'B'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER