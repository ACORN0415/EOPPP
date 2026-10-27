// RTPG_2360: vars=3 stmts=4
void test_func(void) {
    int hi27 = 5;
    int b36 = 38;
    int lo0 = 70;
    int h0 = 49;
    int sv0 = 0;
    int h1 = 11229;
    int sv1 = 0;
    int i;
    for (i = 0; i < 50; i++) {
        b36 = lo0 + 9;
        b36 = b36 - 9;
        hi27 = hi27 - 4;
        hi27 = hi27 ^ b36;
    }
}
int main() { test_func(); return 0; }

