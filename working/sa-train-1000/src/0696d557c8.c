#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_3[34];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_6 = 32;                                       // Tag.BODY
    char entity_4[20];                                   // Tag.BODY
    entity_7 = 49;                                       // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    if (entity_5 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3[entity_6] = 'S';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_5 = 57;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 10; entity_9 < entity_5; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_0[28];                                   // Tag.BODY
    entity_4[entity_9] = '2';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 73;                                       // Tag.BODY
    entity_0[entity_8] = 'e';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER