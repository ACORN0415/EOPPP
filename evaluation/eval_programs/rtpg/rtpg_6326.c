// RTPG_6326: vars=3 stmts=12
void test_func(void) {
    int dat52 = 5;
    int lo19 = 53058;
    int tmp89 = 85;
    int i;
    for (i = 0; i < 26; i++) {
        dat52 = lo19 - tmp89;
        dat52 = dat52;
        lo19 = lo19 ^ dat52;
        lo19 = lo19;
        dat52 = lo19 ^ tmp89;
        tmp89 = tmp89 ^ lo19;
        tmp89 = dat52 - 72;
        lo19 = tmp89 + -1;
        tmp89 = lo19 / dat52;
        tmp89 = dat52 + lo19;
        dat52 = dat52 + 3;
        tmp89 = dat52 - -46;
    }
}
int main() { test_func(); return 0; }

