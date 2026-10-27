// RTPG_589: vars=4 stmts=3
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int v32 = 26;
    int cnt56 = -14;
    int x47 = 27;
    int x27 = 37296;
    int i;
    for (i = 0; i < 21; i++) {
        int j;
        for (j = 0; j < 7; j++) {
        v32 = cnt56 + 14;
        x27 = cnt56 + v32;
        cnt56 = x47 + x27;
        }
    }
}
int main() { test_func(); return 0; }

