#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_4[71];        // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_2[35];        // Tag.BODY
    entity_8 = 78;            // Tag.BODY
    entity_9 = 66;            // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 23;            // Tag.BODY
    if(entity_1 < entity_9){  // Tag.BODY
    entity_1 = 60;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 54;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_1] = 'd'; // Tag.BUFWRITE_COND_UNSAFE
    entity_4[entity_8] = 'h'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER