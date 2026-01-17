#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[10];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_4 = 8;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    if (entity_3 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 28;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 75; entity_5 < entity_3; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_5] = 'D';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER