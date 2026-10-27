// RTPG_769: vars=4 stmts=4
void test_func(void) {
    int prev28 = 8;
    int val61 = 57025;
    int v95 = -47;
    int y29 = 20262;
    int *ptr = &prev28;
    int h0 = 52131;
    int sv0 = 0;
    int h1 = 31008;
    int sv1 = 0;
    int i;
    for (i = 0; i < 46; i++) {
        v95 = v95 + 3;
        v95 = prev28 + prev28;
        prev28 = prev28 - val61;
        y29 = val61 * 52;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

