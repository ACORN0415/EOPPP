// RTPG_4689: vars=3 stmts=12
void test_func(void) {
    int y9 = 4;
    int lo65 = 2;
    int x1 = 97;
    int h0 = 33626;
    int sv0 = 0;
    int h1 = 100;
    int sv1 = 0;
    int i;
    for (i = 0; i < 35; i++) {
        int j;
        for (j = 0; j < 17; j++) {
        y9 = y9 + x1;
        y9 = x1 - 0;
        lo65 = x1 + x1;
        lo65 = lo65 - 46;
        lo65 = x1 + x1;
        x1 = y9 + lo65;
        y9 = y9 - 1;
        y9 = x1 - lo65;
        lo65 = lo65 + -28;
        y9 = x1 + lo65;
        lo65 = lo65 - 3;
        lo65 = lo65 + 55;
        }
    }
}
int main() { test_func(); return 0; }

