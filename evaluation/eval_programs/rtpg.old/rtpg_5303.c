// RTPG_5303: vars=3 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int dat47 = -43;
    int a81 = 47765;
    int cnt72 = 61184;
    int i;
    for (i = 0; i < 32; i++) {
        a81 = xn[i];
        dat47 = dat47 - cnt72;
        dat47 = dat47 - 5;
        cnt72 = a81;
        if (a81 >= -25) {
        cnt72 = dat47;
        }
        yo[i] = cnt72;
    }
}
int main() { test_func(); return 0; }

