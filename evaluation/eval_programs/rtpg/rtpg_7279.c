// RTPG_7279: vars=3 stmts=3
int idx_arr[16];
void test_func(void) {
    int y92 = -11;
    int a88 = 22027;
    int z79 = 13;
    int *ptr = &z79;
    int h0 = 14;
    int sv0 = 0;
    int h1 = 34;
    int sv1 = 0;
    int i;
    for (i = 0; i < 48; i++) {
        int j;
        for (j = 0; j < 7; j++) {
        y92 = a88 + y92;
        z79 = y92 + z79;
        y92 = a88;
        }
    }
}
int main() { test_func(); return 0; }

