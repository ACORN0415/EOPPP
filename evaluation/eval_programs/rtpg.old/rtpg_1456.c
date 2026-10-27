// RTPG_1456: vars=3 stmts=4
int idx_arr[64];
void test_func(void) {
    int dat29 = 33;
    int c34 = 4716;
    int acc53 = 9;
    int *ptr = &dat29;
    int i;
    for (i = 0; i < 18; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        acc53 = acc53 - 2;
        dat29 = dat29 + acc53;
        c34 = c34 - 5;
        acc53 = acc53 - 3;
        }
    }
}
int main() { test_func(); return 0; }

