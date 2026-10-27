// RTPG_7876: vars=20 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int y75 = -29;
    int cnt84 = -22;
    int y18 = 7;
    int acc50 = -15;
    int v39 = 60078;
    int dat45 = 7;
    int sum95 = 59105;
    int x79 = 45;
    int tmp94 = 1;
    int x50 = 50332;
    int b71 = 9;
    int dat28 = 4;
    int dat66 = 2381;
    int tmp41 = 15035;
    int v77 = 6;
    int v51 = 1;
    int b81 = 1;
    int out4 = 51051;
    int prev4 = 48425;
    int cnt13 = -44;
    int i;
    for (i = 0; i < 64; i++) {
        x79 = xn[i];
        dat28 = acc50 / prev4;
        prev4 = b71 + b81;
        x50 = sum95 + acc50;
        out4 = cnt13 + dat28;
        x79 = tmp41 + 2;
        cnt84 = cnt84 + 4;
        y75 = y75 - 3;
        out4 = prev4 + 10;
        yo[i] = prev4;
    }
}
int main() { test_func(); return 0; }

