// RTPG_2282: vars=4 stmts=2
void test_func(void) {
    int a95 = -18;
    int acc33 = 33034;
    int res93 = 48777;
    int res95 = 1;
    int i;
    for (i = 0; i < 17; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        res93 = res93 - 30;
        res95 = res95;
        }
    }
}
int main() { test_func(); return 0; }

