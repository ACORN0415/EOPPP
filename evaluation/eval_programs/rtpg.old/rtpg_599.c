// RTPG_599: vars=4 stmts=3
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int x47 = 26;
    int v32 = -14;
    int cnt56 = 27;
    int x27 = 37296;
    int i;
    for (i = 0; i < 21; i++) {
        int j;
        for (j = 0; j < 7; j++) {
        x47 = v32 + 14;
        x27 = v32 + x47;
        v32 = cnt56 + x27;
        }
    }
}
int main() { test_func(); return 0; }

