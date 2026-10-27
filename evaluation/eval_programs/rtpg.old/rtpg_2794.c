// RTPG_2794: vars=9 stmts=3
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int acc64 = -34;
    int sum44 = 68;
    int lo78 = 9;
    int cur9 = 84;
    int y5 = 24743;
    int y27 = 6;
    int c44 = 10;
    int out86 = 51;
    int cur86 = 83;
    int *ptr = &out86;
    int i;
    for (i = 0; i < 32; i++) {
        sum44 = xn[i];
        cur86 = xn[idx_arr[i]];
        cur9 = out86 + sum44;
        cur9 = y5 + 1991;
        acc64 = c44 + 80;
        *ptr = *ptr + 5;
        yo[i] = y5;
    }
done:
    y5 = 0;
}
int main() { test_func(); return 0; }

