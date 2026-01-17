#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_1 = 84;                                       // Tag.BODY
    char entity_9[73];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_0[59];                                   // Tag.BODY
    entity_3 = 40;                                       // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    if (entity_5 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 2;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 72; entity_4 < entity_5; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_0[entity_4] = 't';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 45;                                       // Tag.BODY
    entity_9[entity_3] = 'J';                            // Tag.BUFWRITE_TAUT_SAFE
    char entity_6[50];                                   // Tag.BODY
    entity_6[entity_8] = '0';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER