// RTPG_5502: vars=4 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int dat94 = 56;
    int acc15 = 3;
    int c68 = 24089;
    int out81 = 9971;
    int *ptr = &dat94;
    int h0 = 44;
    int sv0 = 0;
    int h1 = 32745;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        dat94 = xn[i];
        out81 = out81 - 3;
        acc15 = dat94 + c68;
        acc15 = out81 - -37;
        *ptr = *ptr + 3;
        if (c68 != 46) {
        c68 = acc15 + out81;
        }
        yo[i] = dat94;
    }
}
int main() { test_func(); return 0; }

