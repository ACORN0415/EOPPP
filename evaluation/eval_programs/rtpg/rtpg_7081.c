// RTPG_7081: vars=3 stmts=10
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int cur65 = 48;
    int v13 = 2;
    int dat44 = 2692;
    int i;
    for (i = 0; i < 16; i++) {
        v13 = xn[i];
        v13 = xn[idx_arr[i]];
        v13 = cur65 + v13;
        cur65 = v13 - dat44;
        cur65 = cur65 - v13;
        dat44 = v13 - v13;
        v13 = v13 + 3;
        v13 = v13;
        cur65 = dat44;
        v13 = v13 + 5;
        cur65 = dat44 - 98;
        v13 = dat44 + 8;
        yo[i] = cur65;
    }
}
int main() { test_func(); return 0; }

