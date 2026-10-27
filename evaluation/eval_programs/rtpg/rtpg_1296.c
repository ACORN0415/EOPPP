// RTPG_1296: vars=5 stmts=12
void test_func(void) {
    int hi17 = -44;
    int hi37 = 0;
    int x38 = 22447;
    int dat71 = 39679;
    int acc70 = 39827;
    int h0 = 23;
    int sv0 = 0;
    int h1 = 83;
    int sv1 = 0;
    int i;
    for (i = 0; i < 31; i++) {
        acc70 = dat71 - hi37;
        acc70 = dat71 + hi37;
        dat71 = dat71 ^ x38;
        hi37 = hi37 - 3;
        hi37 = x38;
        dat71 = x38 ^ hi17;
        hi17 = x38 * 63;
        acc70 = acc70 + 3;
        acc70 = x38 | hi17;
        hi17 = hi37 / dat71;
        dat71 = dat71 + 2;
        hi37 = x38 % dat71;
    }
}
int main() { test_func(); return 0; }

