#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_2[90];        // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_4[63];        // Tag.BODY
    entity_1 = 1;             // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    entity_7 = 65;            // Tag.BODY
    if(entity_6 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 12;            // Tag.BODY
    }                         // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_2[entity_6] = 'Z'; // Tag.BUFWRITE_COND_SAFE
    char entity_9[50];        // Tag.BODY
    entity_3 = 34;            // Tag.BODY
    entity_4[entity_1] = 'M'; // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_3] = 'g'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER