#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 68;            // Tag.BODY
    char entity_3[69];        // Tag.BODY
    entity_4 = 85;            // Tag.BODY
    if(entity_1 < entity_4){  // Tag.BODY
    entity_1 = 89;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 54;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_1] = 'w'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER