// RTPG_2128: vars=4 stmts=12
void test_func(void) {
    int x69 = 7;
    int tmp43 = -24;
    int a25 = 6;
    int out48 = 3622;
    int i;
    for (i = 0; i < 34; i++) {
        x69 = x69 + 3;
        out48 = a25;
        tmp43 = tmp43 - x69;
        x69 = x69 - tmp43;
        x69 = x69 - -34;
        tmp43 = out48;
        x69 = x69 - 2;
        out48 = tmp43;
        out48 = a25;
        tmp43 = out48 - a25;
        tmp43 = a25 + out48;
        tmp43 = tmp43;
    }
}
int main() { test_func(); return 0; }

