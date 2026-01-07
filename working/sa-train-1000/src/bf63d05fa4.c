#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    entity_7 = 93;            // Tag.BODY
    char entity_9[20];        // Tag.BODY
    if(entity_0 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 95;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_9[entity_0] = '8'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_4[70];        // Tag.BODY
    entity_2 = 98;            // Tag.BODY
    entity_4[entity_2] = 't'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER