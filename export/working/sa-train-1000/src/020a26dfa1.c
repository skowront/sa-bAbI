#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_8[91];        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    entity_1 = 10;            // Tag.BODY
    entity_5 = 60;            // Tag.BODY
    char entity_9[16];        // Tag.BODY
    entity_9[entity_1] = 'E'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_2 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 57;            // Tag.BODY
    }                         // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_8[entity_2] = 'w'; // Tag.BUFWRITE_COND_SAFE
    char entity_3[93];        // Tag.BODY
    entity_6 = 48;            // Tag.BODY
    entity_3[entity_6] = 'V'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER