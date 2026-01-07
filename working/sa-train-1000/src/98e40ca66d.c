#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[14];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_0 = 22;                                       // Tag.BODY
    entity_3 = 57;                                       // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    char entity_9[72];                                   // Tag.BODY
    if (entity_2 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9[entity_0] = 'X';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = 43;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 62; entity_6 < entity_2; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_6] = 'A';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER