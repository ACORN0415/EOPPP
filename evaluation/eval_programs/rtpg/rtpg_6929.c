// RTPG_6929: vars=4 stmts=3
void test_func(void) {
    int acc36 = 45263;
    int b20 = 23;
    int z45 = 29129;
    int z96 = 16785;
    int h0 = 5;
    int sv0 = 0;
    int h1 = 34;
    int sv1 = 0;
    int i;
    for (i = 0; i < 25; i++) {
        z96 = z96 + 3;
        z45 = b20 - z96;
        z96 = z96 + b20;
    }
}
int main() { test_func(); return 0; }

