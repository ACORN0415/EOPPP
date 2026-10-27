// RTPG_54: vars=5 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int sum62 = -44;
    int x18 = 2;
    int cur39 = 5857;
    int cur38 = 40;
    int b75 = 10;
    int i;
    for (i = 0; i < 16; i++) {
        b75 = xn[i];
        cur38 = cur38 - x18;
        sum62 = sum62 - 4;
        x18 = cur39 - sum62;
        yo[i] = cur39;
    }
}
int main() { test_func(); return 0; }

