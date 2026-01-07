#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_0[12];        // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_9 = 8;             // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    if(entity_7 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 43;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_7] = 'Q'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_3;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_4[7];         // Tag.BODY
    char entity_2[48];        // Tag.BODY
    entity_6 = 73;            // Tag.BODY
    entity_3 = 88;            // Tag.BODY
    entity_4[entity_3] = 'U'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_6] = 's'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER