#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_2[49];        // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 31;            // Tag.BODY
    entity_8 = 18;            // Tag.BODY
    if(entity_9 < entity_8){  // Tag.BODY
    entity_9 = 36;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 66;            // Tag.BODY
    }                         // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_2[entity_9] = 'j'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_5[45];        // Tag.BODY
    char entity_4[3];         // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_1 = 64;            // Tag.BODY
    entity_5[entity_1] = 'n'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 10;            // Tag.BODY
    entity_4[entity_0] = 'p'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER