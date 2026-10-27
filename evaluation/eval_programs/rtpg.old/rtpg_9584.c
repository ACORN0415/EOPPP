// RTPG_9584: vars=3 stmts=8
void test_func(void) {
    int y15 = 23993;
    int a29 = 20;
    int cur58 = 2;
    int i;
    for (i = 0; i < 15; i++) {
        a29 = y15 - 21;
        cur58 = a29;
        cur58 = a29 - cur58;
        a29 = a29 + 5;
        y15 = y15 - 5;
        cur58 = cur58 - 1;
        cur58 = cur58 + 20965;
        y15 = y15 + y15;
    }
}
int main() { test_func(); return 0; }

