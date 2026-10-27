// RTPG_4965: vars=9 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int tmp19 = 20;
    int cur83 = 21;
    int acc37 = 30;
    int v66 = -13;
    int cnt64 = 9719;
    int res86 = 102;
    int cur5 = 49430;
    int v13 = -43;
    int cur23 = -16;
    int i;
    for (i = 0; i < 32; i++) {
        tmp19 = xn[i];
        res86 = res86 + v66;
        cur5 = v13;
        v66 = cur83 + cur5;
        res86 = res86 + 2;
        cnt64 = cur5;
        yo[i] = acc37;
    }
}
int main() { test_func(); return 0; }

