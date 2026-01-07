#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_4[25];        // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    entity_3 = 98;            // Tag.BODY
    if(entity_0 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 34;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_0] = 'q'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER