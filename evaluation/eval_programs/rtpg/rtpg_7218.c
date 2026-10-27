// RTPG_7218: vars=9 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int b81 = 9;
    int b89 = 62952;
    int v49 = 53911;
    int y51 = 44;
    int v18 = 3;
    int y81 = 48;
    int dat73 = 6;
    int v30 = 12;
    int out84 = 3;
    int i;
    for (i = 0; i < 16; i++) {
        out84 = xn[i];
        b89 = b89 + 4;
        v49 = y51 + 4;
        b89 = v49;
        y51 = v30 - 48807;
        v30 = v30 - 2;
        if (v49 != 95) {
        v30 = v49 + dat73;
        }
        yo[i] = v18;
    }
}
int main() { test_func(); return 0; }

