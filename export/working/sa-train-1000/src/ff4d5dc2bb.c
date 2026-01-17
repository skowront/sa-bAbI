#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    entity_2 = 58;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_4[92];                                   // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    if (entity_6 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 85;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 10; entity_7 < entity_6; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_4[entity_7] = 'F';                            // Tag.BUFWRITE_COND_SAFE
    entity_0 = 69;                                       // Tag.BODY
    char entity_3[6];                                    // Tag.BODY
    entity_3[entity_0] = 'l';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER