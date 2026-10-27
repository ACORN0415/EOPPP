// RTPG_2535: vars=11 stmts=11
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    float cur18 = 64.85;
    int tmp9 = -38;
    int hi39 = 11;
    float dat81 = 68.17;
    double prev99 = 89.53;
    int sum35 = 55;
    double acc72 = 57.41;
    double x84 = 59.18;
    int cur39 = 63786;
    double cnt49 = 51.61;
    float v62 = 93.23;
    int i;
    for (i = 0; i < 16; i++) {
        v62 = xn[i];
        x84 = xn[idx_arr[i]];
        cur18 = prev99 - v62;
        prev99 = hi39 + cur39;
        tmp9 = tmp9 + 1;
        cur18 = tmp9;
        prev99 = prev99 - 3;
        hi39 = sum35 - 2;
        x84 = tmp9 + sum35;
        acc72 = x84 + hi39;
        cnt49 = acc72;
        acc72 = acc72 + cnt49;
        x84 = sum35 - acc72;
        if (acc72 >= 41) {
        cnt49 = cur39;
        }
        yo[i] = tmp9;
    }
}
int main() { test_func(); return 0; }

