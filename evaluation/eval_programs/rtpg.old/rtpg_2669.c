// RTPG_2669: vars=8 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int a43 = 8;
    int y90 = 22;
    int cur56 = 3;
    int out18 = 5450;
    int b61 = 3;
    int y84 = 48;
    int c82 = 243;
    int hi46 = 3;
    int *ptr = &cur56;
    int i;
    for (i = 0; i < 16; i++) {
        out18 = xn[i];
        hi46 = cur56 - y84;
        hi46 = y90 - y84;
        a43 = a43;
        cur56 = cur56 + b61;
        *ptr = *ptr + 3;
        yo[i] = y84;
    }
}
int main() { test_func(); return 0; }

