// RTPG_5383: vars=6 stmts=2
void test_func(void) {
    int a51 = 99;
    int a86 = 9;
    int v21 = 74;
    int lo94 = 25;
    int val63 = 8;
    int dat87 = 24;
    int i;
    for (i = 0; i < 30; i++) {
        lo94 = v21 + a86;
        v21 = lo94 - v21;
    }
}
int main() { test_func(); return 0; }

