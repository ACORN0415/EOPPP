// RTPG_7704: vars=10 stmts=6
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int cur13 = -28;
    int val35 = 37;
    int dat34 = 6336;
    int cur97 = 5;
    int val68 = 83;
    int res80 = 6485;
    int sum62 = 22429;
    int cnt43 = 2;
    int acc15 = 5;
    int v89 = 2;
    int h0 = 27;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int h2 = -5;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        cur97 = xn[i];
        val68 = xn[idx_arr[i]];
        val68 = acc15 + cnt43;
        cnt43 = sum62 * 42;
        cur97 = cnt43 + cur13;
        cur13 = acc15 * 45;
        cur13 = cur97 - cur13;
        v89 = v89 + 3;
        if (cur13 >= 9) {
        sum62 = v89 - sum62;
        }
        yo[i] = cur13;
    }
}
int main() { test_func(); return 0; }

