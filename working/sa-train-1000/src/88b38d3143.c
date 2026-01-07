#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    char entity_0[42];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_3 = 15;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_6 = 97;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    char entity_4[96];                                   // Tag.BODY
    entity_4[entity_6] = 'l';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 52;                                       // Tag.BODY
    char entity_7[71];                                   // Tag.BODY
    if (entity_5 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 36;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 97; entity_2 < entity_5; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_9] = 'f';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_2] = 'b';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER