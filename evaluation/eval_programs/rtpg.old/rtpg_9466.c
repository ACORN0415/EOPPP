// RTPG_9466: vars=7 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int res23 = 48689;
    int acc12 = 49;
    int dat81 = 3;
    int acc85 = 10;
    int out99 = 26303;
    int z10 = 10;
    int tmp77 = 41864;
    int h0 = 14287;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        dat81 = xn[i];
        z10 = z10 + 3;
        acc85 = dat81 - out99;
        out99 = tmp77;
        dat81 = acc85 - 3723;
        dat81 = res23 + acc12;
        tmp77 = res23 * 1;
        acc12 = tmp77 * 10;
        yo[i] = acc85;
    }
}
int main() { test_func(); return 0; }

