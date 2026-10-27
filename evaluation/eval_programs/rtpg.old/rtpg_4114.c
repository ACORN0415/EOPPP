// RTPG_4114: vars=7 stmts=2
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int x86 = 25785;
    int x40 = 48201;
    int b44 = 89;
    int lo60 = 9;
    int a38 = 93;
    int dat46 = 44058;
    int out7 = 5;
    int i;
    for (i = 0; i < 64; i++) {
        x86 = xn[i];
        x86 = xn[idx_arr[i]];
        b44 = x40;
        x86 = lo60;
        yo[i] = dat46;
    }
}
int main() { test_func(); return 0; }

