// RTPG_5305: vars=6 stmts=6
void test_func(void) {
    int cur54 = 21;
    int cur81 = 100;
    int sum78 = 27;
    int acc28 = 3;
    int dat4 = 1517;
    int acc58 = 3;
    int *ptr = &dat4;
    int i;
    for (i = 0; i < 66; i++) {
        cur81 = cur81 / acc28;
        acc58 = acc58 + 5;
        acc58 = cur54;
        dat4 = acc58 + acc28;
        cur81 = cur81 + 3;
        acc28 = dat4 - cur81;
        *ptr = *ptr + 3;
        if (dat4 > -4) {
        sum78 = sum78 - 4;
        }
    }
}
int main() { test_func(); return 0; }

