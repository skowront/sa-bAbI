#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_4[92];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 79;            // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 90;            // Tag.BODY
    if(entity_5 < entity_1){  // Tag.BODY
    entity_5 = 32;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 95;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_5] = 'h'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER