// RTPG_5103: vars=3 stmts=2
int idx_arr[32];
void test_func(void) {
    int out37 = 14;
    int lo34 = 10;
    int b71 = 31;
    int *ptr = &lo34;
    int h0 = 84;
    int sv0 = 0;
    int h1 = 56;
    int sv1 = 0;
    int i;
    for (i = 0; i < 68; i++) {
        lo34 = xn[idx_arr[i]];
        lo34 = out37 * 10;
        out37 = out37 + b71;
        *ptr = *ptr + 4;
        if (lo34 < 90) {
        out37 = out37 + 1;
        }
    }
}
int main() { test_func(); return 0; }

