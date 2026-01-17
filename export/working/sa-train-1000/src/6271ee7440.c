#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[1];                                    // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_8 = 29;                                       // Tag.BODY
    char entity_6[3];                                    // Tag.BODY
    entity_0 = 24;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    if (entity_9 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 63;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 76; entity_3 < entity_9; entity_3++){ // Tag.BODY
    entity_2[entity_8] = 'F';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    char entity_7[92];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_6[entity_3] = 'S';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 30;                                       // Tag.BODY
    entity_7[entity_5] = '6';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER