// RTPG_88: vars=3 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int lo95 = 26953;
    int v48 = 9;
    int y57 = 15776;
    int *ptr = &y57;
    int i;
    for (i = 0; i < 16; i++) {
        y57 = xn[i];
        v48 = v48;
        lo95 = lo95 - 14680;
        *ptr = *ptr + 1;
        if (lo95 >= 57) {
        v48 = v48 - v48;
        }
        yo[i] = lo95;
    }
}
int main() { test_func(); return 0; }

