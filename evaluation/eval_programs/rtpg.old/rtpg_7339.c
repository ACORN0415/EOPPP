// RTPG_7339: vars=4 stmts=2
void test_func(void) {
    int res10 = 45;
    int z43 = 3;
    int dat31 = 3;
    int lo78 = 80;
    int h0 = 80;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 80; i++) {
        res10 = res10 + 3;
        res10 = z43 * -16;
        if (res10 >= 40) {
        res10 = dat31 - res10;
        }
    }
}
int main() { test_func(); return 0; }

