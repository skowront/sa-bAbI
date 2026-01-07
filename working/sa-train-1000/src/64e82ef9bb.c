#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_2[6];         // Tag.BODY
    char entity_4[15];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_9 = 44;            // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    entity_7 = 91;            // Tag.BODY
    if(entity_6 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 84;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_9] = 'I'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_6] = '7'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER