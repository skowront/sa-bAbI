#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_6[14];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    char entity_5[20];                                   // Tag.BODY
    entity_0 = 25;                                       // Tag.BODY
    entity_7 = 34;                                       // Tag.BODY
    if (entity_2 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6[entity_7] = 'x';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 95;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 71; entity_3 < entity_2; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_3] = 'W';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER