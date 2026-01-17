#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 25;            // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_4 = 57;            // Tag.BODY
    entity_2 = 39;            // Tag.BODY
    char entity_7[7];         // Tag.BODY
    char entity_8[32];        // Tag.BODY
    if(entity_2 < entity_4){  // Tag.BODY
    entity_2 = 42;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8[entity_6] = 'd'; // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = 22;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_2] = 'W'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER