// RTPG_2070: vars=6 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int val14 = 21;
    int y65 = 37;
    int out15 = 58;
    int y75 = 14;
    int cnt49 = 48196;
    int b5 = 10;
    int h0 = 23;
    int sv0 = 0;
    int h1 = 77;
    int sv1 = 0;
    int h2 = 9;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        cnt49 = xn[i];
        out15 = out15 - 3;
        out15 = out15 + 1;
        y65 = y65 * 44;
        out15 = b5 - out15;
        val14 = cnt49 - 7;
        cnt49 = y65 * 8;
        b5 = val14 + out15;
        y75 = val14 + 57906;
        if (out15 == 88) {
        out15 = val14 + y65;
        }
        yo[i] = out15;
    }
}
int main() { test_func(); return 0; }

