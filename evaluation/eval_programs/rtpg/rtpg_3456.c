// RTPG_3456: vars=3 stmts=6
void test_func(void) {
    int val37 = 54;
    int tmp55 = 77;
    int val51 = 40314;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 13; i++) {
        int j;
        for (j = 0; j < 19; j++) {
        val37 = val37 + 3;
        val37 = tmp55 + val51;
        tmp55 = tmp55 - 2;
        val51 = val51 + tmp55;
        val51 = val51 - tmp55;
        val51 = val51 + 4;
        }
    }
}
int main() { test_func(); return 0; }

