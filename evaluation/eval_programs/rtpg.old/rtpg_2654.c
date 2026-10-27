// RTPG_2654: vars=4 stmts=12
void test_func(void) {
    int cur18 = 78;
    int dat70 = 45;
    int sum79 = 2;
    int dat32 = 10628;
    int i;
    for (i = 0; i < 41; i++) {
        sum79 = dat32;
        sum79 = sum79 - 2;
        sum79 = sum79 - dat70;
        dat32 = cur18 - dat32;
        dat32 = sum79 + cur18;
        sum79 = sum79;
        dat70 = dat70 - 4;
        dat32 = sum79 - sum79;
        dat32 = dat70 + cur18;
        cur18 = dat70 - dat32;
        dat32 = dat70 - dat32;
        dat32 = cur18 - sum79;
        if (cur18 < 36) {
        cur18 = dat70 - cur18;
        }
    }
}
int main() { test_func(); return 0; }

