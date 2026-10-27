// RTPG_3884: vars=3 stmts=5
void test_func(void) {
    int dat82 = 2;
    int z60 = 3057;
    int prev65 = -36;
    int h0 = 84;
    int sv0 = 0;
    int h1 = 40678;
    int sv1 = 0;
    int i;
    for (i = 0; i < 50; i++) {
        prev65 = z60 * 84;
        prev65 = dat82 * 10;
        dat82 = dat82 + 2;
        prev65 = z60;
        z60 = z60 + prev65;
    }
}
int main() { test_func(); return 0; }

