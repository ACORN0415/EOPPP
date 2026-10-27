// RTPG_2550: vars=11 stmts=11
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    float cur18 = 64.85;
    int acc72 = -38;
    int v62 = 11;
    float prev99 = 68.17;
    double tmp9 = 89.53;
    int hi39 = 55;
    double dat81 = 57.41;
    double sum35 = 59.18;
    int cnt49 = 63786;
    double x84 = 51.61;
    float cur39 = 93.23;
    int i;
    for (i = 0; i < 16; i++) {
        cur39 = xn[i];
        sum35 = xn[idx_arr[i]];
        cur18 = tmp9 - cur39;
        tmp9 = v62 + cnt49;
        acc72 = acc72 + 1;
        cur18 = acc72;
        tmp9 = tmp9 - 3;
        v62 = hi39 - 2;
        sum35 = acc72 + hi39;
        dat81 = sum35 + v62;
        x84 = dat81;
        dat81 = dat81 + x84;
        sum35 = hi39 - dat81;
        if (dat81 >= 41) {
        x84 = cnt49;
        }
        yo[i] = acc72;
    }
}
int main() { test_func(); return 0; }

