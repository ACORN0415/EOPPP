// RTPG_4198: vars=3 stmts=4
void test_func(void) {
    int x24 = 17;
    int res17 = 4;
    int tmp14 = 10;
    int h0 = 100;
    int sv0 = 0;
    int h1 = 45864;
    int sv1 = 0;
    int i;
    for (i = 0; i < 27; i++) {
        tmp14 = x24 + res17;
        tmp14 = res17;
        tmp14 = tmp14 - res17;
        tmp14 = res17 - res17;
    }
}
int main() { test_func(); return 0; }

