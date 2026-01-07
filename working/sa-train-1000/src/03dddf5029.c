#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_7[49];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 33;                                       // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    if (entity_5 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 14;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 44; entity_4 < entity_5; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_6[65];                                   // Tag.BODY
    entity_7[entity_4] = 'i';                            // Tag.BUFWRITE_COND_SAFE
    int entity_2;                                        // Tag.BODY
    entity_2 = 70;                                       // Tag.BODY
    entity_6[entity_2] = '0';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER