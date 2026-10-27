// RTPG_3709: vars=5 stmts=5
int idx_arr[16];
void test_func(void) {
    int cur73 = 9;
    int v48 = 21225;
    int hi22 = 5303;
    int dat47 = 22207;
    int tmp67 = 39967;
    int *ptr = &cur73;
    int i;
    for (i = 0; i < 100; i++) {
        dat47 = xn[idx_arr[i]];
        tmp67 = tmp67 + 7;
        tmp67 = v48 - 29;
        dat47 = dat47 - 1;
        tmp67 = dat47 + v48;
        tmp67 = v48 + 59;
        *ptr = *ptr + 3;
        if (hi22 == 27) {
        v48 = v48 + cur73;
        }
    }
}
int main() { test_func(); return 0; }

