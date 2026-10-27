// RTPG_8639: vars=6 stmts=12
void test_func(void) {
    int prev61 = 40;
    int v39 = 3;
    int tmp15 = 20171;
    int b25 = 11;
    int c52 = 1;
    int cnt76 = 12442;
    int i;
    for (i = 0; i < 84; i++) {
        tmp15 = cnt76 - 4;
        cnt76 = v39 + c52;
        b25 = b25 - tmp15;
        b25 = prev61 - v39;
        tmp15 = c52 + b25;
        tmp15 = b25 + cnt76;
        prev61 = tmp15;
        v39 = tmp15;
        cnt76 = cnt76 + 3;
        v39 = prev61 - b25;
        c52 = cnt76;
        b25 = b25 - 0;
    }
}
int main() { test_func(); return 0; }

