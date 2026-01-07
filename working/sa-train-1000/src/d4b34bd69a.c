#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    char entity_9[35];        // Tag.BODY
    entity_1 = 40;            // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 78;            // Tag.BODY
    if(entity_7 < entity_1){  // Tag.BODY
    entity_7 = 34;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 66;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_7] = 'W'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER