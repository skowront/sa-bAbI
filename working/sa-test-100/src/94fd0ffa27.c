#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_9[14];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    entity_1 = 98;                                       // Tag.BODY
    if (entity_6 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 51;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 42; entity_5 < entity_6; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_9[entity_5] = '6';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[82];                                   // Tag.BODY
    entity_0 = 44;                                       // Tag.BODY
    entity_3[entity_0] = 'X';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER