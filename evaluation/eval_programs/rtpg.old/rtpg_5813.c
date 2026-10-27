// RTPG_5813: vars=5 stmts=7
void test_func(void) {
    int cnt84 = 1;
    int lo51 = 74;
    int v42 = 15;
    int lo38 = 33287;
    double x80 = 22.53;
    int i;
    for (i = 0; i < 29; i++) {
        int j;
        for (j = 0; j < 19; j++) {
        v42 = x80 + 16;
        cnt84 = lo38 - x80;
        lo51 = v42 + x80;
        x80 = x80 + 5;
        x80 = x80 - 1;
        lo38 = lo38 + 4;
        cnt84 = cnt84 + lo38;
        }
    }
}
int main() { test_func(); return 0; }

