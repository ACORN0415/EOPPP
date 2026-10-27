// RTPG_2838: vars=3 stmts=4
void test_func(void) {
    int dat10 = 5;
    float lo55 = 6.78;
    int cnt1 = 4;
    int i;
    for (i = 0; i < 65; i++) {
        cnt1 = dat10 % lo55;
        lo55 = lo55;
        cnt1 = cnt1 - 5;
        cnt1 = dat10 - lo55;
    }
}
int main() { test_func(); return 0; }

