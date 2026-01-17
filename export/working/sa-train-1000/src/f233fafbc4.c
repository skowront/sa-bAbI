#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_6[99];        // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_5[14];        // Tag.BODY
    entity_9 = 29;            // Tag.BODY
    entity_4 = 43;            // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    if(entity_2 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6[entity_4] = 'T'; // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = 37;            // Tag.BODY
    }                         // Tag.BODY
    char entity_1[71];        // Tag.BODY
    entity_5[entity_2] = '9'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_7;             // Tag.BODY
    entity_7 = 25;            // Tag.BODY
    entity_1[entity_7] = '0'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER