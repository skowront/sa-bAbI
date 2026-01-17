#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_3[61];                                   // Tag.BODY
    entity_9 = 99;                                       // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    if (entity_4 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 39;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 42; entity_8 < entity_4; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 2;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_0[87];                                   // Tag.BODY
    entity_3[entity_8] = 'A';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_2 = 62;                                       // Tag.BODY
    char entity_7[99];                                   // Tag.BODY
    entity_7[entity_2] = 'W';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_1] = '9';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER