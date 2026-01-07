#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_7[17];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 87;                                       // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    if (entity_2 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 43;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 45; entity_8 < entity_2; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_8] = 'R';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER