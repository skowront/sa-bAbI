#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_8[26];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_9 = 43;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_6[33];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_2 = 22;                                       // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    if (entity_1 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 71;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 45; entity_7 < entity_1; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_9] = 'F';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_7] = 'p';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER