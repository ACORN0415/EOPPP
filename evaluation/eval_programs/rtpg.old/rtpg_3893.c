// RTPG_3893: vars=10 stmts=8
void test_func(void) {
    int acc11 = -4;
    int x48 = 4;
    int y48 = 9;
    int prev27 = 1;
    int v81 = 84;
    int sum7 = 98;
    int hi75 = 7;
    int lo97 = 34740;
    int cur93 = 6988;
    int dat4 = 79;
    int i;
    for (i = 0; i < 6; i++) {
        int j;
        for (j = 0; j < 11; j++) {
        prev27 = sum7;
        acc11 = acc11 - 4;
        x48 = x48;
        lo97 = v81 + cur93;
        v81 = acc11 + lo97;
        lo97 = acc11 + sum7;
        lo97 = cur93 - 2;
        acc11 = hi75 + hi75;
        }
    }
}
int main() { test_func(); return 0; }

