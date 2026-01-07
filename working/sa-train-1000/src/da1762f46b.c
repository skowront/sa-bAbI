#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_3[72];        // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_0 = 2;             // Tag.BODY
    entity_9 = 51;            // Tag.BODY
    if(entity_0 < entity_9){  // Tag.BODY
    entity_0 = 96;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 82;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_0] = '8'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER