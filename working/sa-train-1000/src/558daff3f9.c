#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 64;            // Tag.BODY
    char entity_0[23];        // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    if(entity_4 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 67;            // Tag.BODY
    }                         // Tag.BODY
    char entity_2[27];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_0[entity_4] = '0'; // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 83;            // Tag.BODY
    entity_2[entity_6] = '6'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER