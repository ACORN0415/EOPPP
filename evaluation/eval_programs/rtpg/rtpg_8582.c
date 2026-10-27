// RTPG_8582: vars=3 stmts=2
int idx_arr[16];
void test_func(void) {
    int val73 = 10079;
    int b87 = 8;
    int out5 = 25597;
    int *ptr = &out5;
    int i;
    for (i = 0; i < 27; i++) {
        val73 = xn[idx_arr[i]];
        val73 = b87;
        out5 = b87 + val73;
        *ptr = *ptr + 3;
        if (out5 > 10) goto done;
    }
done:
    b87 = 0;
}
int main() { test_func(); return 0; }

