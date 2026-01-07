#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    char entity_2[49];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_4 = 40;                                       // Tag.BODY
    if (entity_3 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 74;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 36; entity_6 < entity_3; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_6] = 'W';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER