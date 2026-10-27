// RTPG_7599: vars=6 stmts=11
void test_func(void) {
    int v30 = 88;
    int out80 = 2;
    int tmp58 = 6;
    int cur92 = 16075;
    int hi26 = 7;
    int tmp50 = 3;
    int h0 = 38507;
    int sv0 = 0;
    int h1 = 27;
    int sv1 = 0;
    int i;
    for (i = 0; i < 80; i++) {
        out80 = out80 + tmp50;
        cur92 = out80 + cur92;
        v30 = v30 * 98;
        out80 = tmp50 * 11;
        out80 = tmp58 / tmp58;
        v30 = hi26 - tmp50;
        tmp50 = out80 + hi26;
        tmp58 = tmp58 + 1;
        out80 = tmp50;
        tmp50 = cur92 | hi26;
        out80 = out80 + -29;
    }
}
int main() { test_func(); return 0; }

