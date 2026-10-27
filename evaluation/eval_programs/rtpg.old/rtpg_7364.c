// RTPG_7364: vars=4 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int v8 = 7;
    int c16 = 8035;
    int hi96 = 2;
    int cur81 = 3;
    int i;
    for (i = 0; i < 32; i++) {
        v8 = xn[i];
        cur81 = v8 | cur81;
        cur81 = cur81 + 1;
        cur81 = cur81 + 16;
        yo[i] = cur81;
    }
}
int main() { test_func(); return 0; }

