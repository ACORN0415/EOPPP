// RTPG_6853: vars=4 stmts=3
void test_func(void) {
    int b20 = 45263;
    int acc36 = 23;
    int z45 = 29129;
    int z96 = 16785;
    int h0 = 5;
    int sv0 = 0;
    int h1 = 34;
    int sv1 = 0;
    int i;
    for (i = 0; i < 25; i++) {
        z96 = z96 + 3;
        z45 = acc36 - z96;
        z96 = z96 + acc36;
    }
}
int main() { test_func(); return 0; }

