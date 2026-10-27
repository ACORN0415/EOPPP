// RTPG_9837: vars=4 stmts=11
void test_func(void) {
    int a34 = 19;
    int hi27 = 9;
    int x94 = -8;
    int hi56 = 8;
    int i;
    for (i = 0; i < 55; i++) {
        x94 = x94 - a34;
        hi27 = hi27 + 2;
        a34 = x94 - hi56;
        a34 = hi56 + x94;
        a34 = a34 - 5;
        hi27 = hi27;
        x94 = a34;
        hi27 = hi27 + 4;
        hi56 = hi27 - hi56;
        hi56 = x94 + a34;
        x94 = a34;
    }
}
int main() { test_func(); return 0; }

