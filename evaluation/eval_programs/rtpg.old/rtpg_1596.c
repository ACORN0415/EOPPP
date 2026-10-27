// RTPG_1596: vars=4 stmts=11
int xn[16];
int yo[16];
void test_func(void) {
    int a42 = 10;
    int v36 = 367;
    int cnt39 = 47;
    int lo91 = -35;
    int i;
    for (i = 0; i < 16; i++) {
        v36 = xn[i];
        lo91 = cnt39 % v36;
        lo91 = a42 + lo91;
        a42 = cnt39 - lo91;
        lo91 = a42 + lo91;
        lo91 = v36 - cnt39;
        a42 = a42 ^ cnt39;
        lo91 = v36 + lo91;
        a42 = lo91 - v36;
        lo91 = lo91 & lo91;
        lo91 = lo91 + 1;
        lo91 = lo91;
        if (v36 > 44) {
        cnt39 = lo91;
        }
        yo[i] = lo91;
    }
}
int main() { test_func(); return 0; }

