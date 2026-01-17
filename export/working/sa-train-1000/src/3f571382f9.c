#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_0[30];                                   // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 8;                                        // Tag.BODY
    if (entity_4 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 15;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 66; entity_2 < entity_4; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_7[88];                                   // Tag.BODY
    entity_0[entity_2] = 'M';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_3;                                        // Tag.BODY
    entity_3 = 40;                                       // Tag.BODY
    entity_7[entity_3] = '0';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER