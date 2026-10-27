// RTPG_6234: vars=6 stmts=7
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int out18 = 7;
    int a39 = 29;
    double tmp36 = 62.86;
    int v87 = 41;
    float hi16 = 62.59;
    int x31 = 92;
    int i;
    for (i = 0; i < 32; i++) {
        hi16 = xn[i];
        v87 = xn[idx_arr[i]];
        v87 = v87 + 4;
        v87 = v87 | a39;
        hi16 = hi16;
        out18 = x31 | hi16;
        a39 = a39 - 3;
        hi16 = tmp36 ^ x31;
        x31 = x31 + 94;
        if (v87 <= -14) {
        x31 = hi16 + tmp36;
        }
        yo[i] = out18;
    }
}
int main() { test_func(); return 0; }

