// RTPG_2373: vars=6 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int sum26 = 6938;
    int x30 = 43801;
    int a41 = -49;
    int acc34 = 22170;
    int dat44 = 2902;
    int a77 = 48;
    int i;
    for (i = 0; i < 32; i++) {
        dat44 = xn[i];
        a41 = a41 - 4;
        x30 = x30 + dat44;
        acc34 = acc34 - 2;
        x30 = sum26 + a77;
        x30 = a77;
        a77 = a41;
        dat44 = acc34 - a41;
        yo[i] = acc34;
    }
}
int main() { test_func(); return 0; }

