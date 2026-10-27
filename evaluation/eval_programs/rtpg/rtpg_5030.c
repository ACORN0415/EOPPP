// RTPG_5030: vars=5 stmts=3
int xn[32];
int yo[32];
enum State { GREEN, OFF, SLOW };
void test_func(void) {
    int hi24 = 33;
    int v69 = 33;
    int tmp11 = 6;
    int res49 = 25031;
    int a76 = 9;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 32; i++) {
        hi24 = xn[i];
        tmp11 = v69 + a76;
        a76 = v69;
        v69 = res49;
        yo[i] = res49;
    }
}
int main() { test_func(); return 0; }

