// RTPG_3825: vars=4 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int z71 = 3;
    int hi19 = -3;
    int out7 = 29;
    int sum34 = 45;
    int *ptr = &z71;
    int i;
    for (i = 0; i < 64; i++) {
        z71 = xn[i];
        sum34 = sum34;
        sum34 = sum34;
        hi19 = hi19 - out7;
        out7 = z71 + hi19;
        sum34 = sum34 - 3;
        z71 = sum34 - out7;
        hi19 = z71;
        hi19 = sum34 + out7;
        *ptr = *ptr + 2;
        if (out7 > -8) {
        sum34 = sum34 - out7;
        }
        yo[i] = z71;
    }
}
int main() { test_func(); return 0; }

