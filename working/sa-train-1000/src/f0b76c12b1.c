#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_9[10];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 40;                                       // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    if (entity_7 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 80;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 22; entity_4 < entity_7; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_4] = 'b';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_3;                                        // Tag.BODY
    entity_3 = 65;                                       // Tag.BODY
    char entity_1[72];                                   // Tag.BODY
    entity_1[entity_3] = 'e';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER