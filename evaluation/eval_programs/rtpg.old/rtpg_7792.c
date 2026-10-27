// RTPG_7792: vars=7 stmts=12
int xn[32];
int yo[32];
void test_func(void) {
    int y51 = 9;
    int a19 = 10;
    int v37 = 14148;
    int hi24 = 50;
    int sum38 = 48;
    int sum27 = 15;
    int cnt76 = 56;
    int i;
    for (i = 0; i < 32; i++) {
        a19 = xn[i];
        cnt76 = cnt76;
        sum27 = v37;
        sum38 = y51 + v37;
        a19 = a19 - cnt76;
        y51 = v37 - 46;
        cnt76 = hi24;
        hi24 = sum27 - 6;
        hi24 = sum38 + -2;
        a19 = a19 + sum38;
        a19 = a19 + v37;
        hi24 = hi24 + 3;
        y51 = y51 + sum27;
        yo[i] = a19;
    }
}
int main() { test_func(); return 0; }

