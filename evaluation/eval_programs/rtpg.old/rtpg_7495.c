// RTPG_7495: vars=11 stmts=9
int xn[64];
int yo[64];
void test_func(void) {
    int a71 = 49;
    int tmp14 = 15;
    int c68 = 1;
    int cur64 = 16;
    int x40 = 83;
    int y93 = 45317;
    int tmp76 = 48439;
    int y16 = 29;
    int lo27 = 88;
    int v19 = 61;
    int y76 = 62492;
    int *ptr = &y93;
    int i;
    for (i = 0; i < 84; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        y76 = y76 - 1;
        v19 = y93 - tmp14;
        y16 = tmp14 - a71;
        a71 = lo27;
        tmp76 = x40 + y16;
        y76 = y93 + tmp14;
        y16 = y16 - 4;
        c68 = cur64 - tmp76;
        a71 = c68 - v19;
        }
    }
done:
    y76 = 0;
}
int main() { test_func(); return 0; }

