// RTPG_3994: vars=4 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int v79 = 20;
    int y17 = 20029;
    int y12 = 2;
    int cur21 = 65356;
    int i;
    for (i = 0; i < 64; i++) {
        y12 = xn[i];
        v79 = cur21 + cur21;
        y17 = cur21;
        v79 = cur21;
        y17 = y17 - 5;
        y12 = y12 - 3;
        yo[i] = v79;
    }
}
int main() { test_func(); return 0; }

