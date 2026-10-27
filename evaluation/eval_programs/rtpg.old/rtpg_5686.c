// RTPG_5686: vars=5 stmts=6
void test_func(void) {
    int b42 = 1;
    int cnt40 = 10;
    int cur88 = 57990;
    int hi78 = 43;
    int acc18 = 4263;
    int h0 = 79;
    int sv0 = 0;
    int h1 = 68;
    int sv1 = 0;
    int i;
    for (i = 0; i < 47; i++) {
        b42 = b42 / cnt40;
        cnt40 = cnt40 + 1;
        acc18 = acc18 + b42;
        cnt40 = hi78 ^ cur88;
        hi78 = b42;
        b42 = b42 * 47046;
    }
}
int main() { test_func(); return 0; }

