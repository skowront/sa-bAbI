#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    char entity_1[40];        // Tag.BODY
    entity_9 = 10;            // Tag.BODY
    if(entity_0 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 56;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_0] = 'o'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER