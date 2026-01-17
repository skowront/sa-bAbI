#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_4[94];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 19;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_5 = 48;                                       // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    char entity_1[40];                                   // Tag.BODY
    if (entity_7 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 93;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 41; entity_3 < entity_7; entity_3++){ // Tag.BODY
    entity_4[entity_5] = 'Q';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    entity_1[entity_3] = 'O';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER