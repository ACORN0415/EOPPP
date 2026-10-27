// RTPG_5985: vars=6 stmts=8
void test_func(void) {
    int hi35 = 26905;
    int x34 = 19;
    int c8 = 36;
    int lo60 = 49716;
    int hi56 = 9;
    int hi62 = 16096;
    int i;
    for (i = 0; i < 80; i++) {
        lo60 = hi62;
        hi62 = c8 % c8;
        x34 = x34 + 4;
        hi56 = hi56 + 5;
        c8 = c8 - 2;
        x34 = x34 + 4;
        hi35 = x34 - hi62;
        hi56 = x34 - hi62;
    }
}
int main() { test_func(); return 0; }

