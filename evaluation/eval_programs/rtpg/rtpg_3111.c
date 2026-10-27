// RTPG_3111: vars=6 stmts=8
void test_func(void) {
    int a14 = 77;
    int a63 = 20;
    int tmp91 = 6;
    int tmp8 = 1;
    int tmp25 = 2;
    int b7 = -17;
    int i;
    for (i = 0; i < 63; i++) {
        tmp91 = b7 + a14;
        b7 = b7 + 5;
        tmp25 = tmp25 + 2;
        tmp25 = tmp8 + a63;
        a63 = tmp8 + tmp8;
        tmp8 = tmp25 + b7;
        a14 = b7 - tmp25;
        b7 = b7 - 5;
        if (tmp25 > -12) {
        b7 = tmp25;
        }
    }
}
int main() { test_func(); return 0; }

