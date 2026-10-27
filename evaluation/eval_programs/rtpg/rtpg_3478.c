// RTPG_3478: vars=7 stmts=5
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int lo59 = 12350;
    int cnt66 = 94;
    int acc32 = 8;
    int dat96 = 17;
    int lo86 = 6;
    int val27 = 4;
    int v43 = 4;
    int i;
    for (i = 0; i < 32; i++) {
        lo86 = xn[i];
        lo86 = xn[idx_arr[i]];
        lo59 = cnt66 + val27;
        dat96 = val27 + acc32;
        lo59 = lo59 + -13;
        v43 = v43;
        dat96 = lo86 + acc32;
        yo[i] = v43;
    }
}
int main() { test_func(); return 0; }

