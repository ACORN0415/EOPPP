// RTPG_4066: vars=10 stmts=11
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int y36 = 25794;
    int cur25 = 4;
    int dat53 = 5;
    int sum0 = -45;
    int c16 = 25;
    int cnt16 = 59645;
    int a2 = 4;
    int tmp23 = 28;
    int v93 = -37;
    int out7 = 10;
    int i;
    for (i = 0; i < 64; i++) {
        cur25 = xn[i];
        cur25 = xn[idx_arr[i]];
        cnt16 = a2;
        sum0 = sum0 + 3;
        y36 = c16 + cur25;
        cnt16 = cnt16 - 5;
        v93 = c16;
        cur25 = sum0 - cur25;
        y36 = y36 + 5;
        cnt16 = tmp23 + cur25;
        tmp23 = v93 + y36;
        out7 = cnt16 - c16;
        v93 = v93 + 2;
        yo[i] = cur25;
    }
}
int main() { test_func(); return 0; }

