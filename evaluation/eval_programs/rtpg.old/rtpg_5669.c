// RTPG_5669: vars=10 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int y36 = 17596;
    int cnt19 = 49;
    int v17 = 44;
    int c13 = 54;
    int dat29 = 2500;
    int y27 = 42;
    int v98 = 9;
    int prev22 = 98;
    int sum81 = 1;
    int prev60 = 9;
    int i;
    for (i = 0; i < 64; i++) {
        v98 = xn[i];
        prev22 = prev22 - 2;
        v98 = y36 - v98;
        c13 = y36 - sum81;
        yo[i] = y27;
    }
}
int main() { test_func(); return 0; }

