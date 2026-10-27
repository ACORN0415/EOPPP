// RTPG_9487: vars=5 stmts=5
void test_func(void) {
    float tmp99 = 2.31;
    int b25 = 24;
    float cnt79 = 86.69;
    int v81 = 29770;
    int sum47 = 1;
    int i;
    for (i = 0; i < 87; i++) {
        v81 = cnt79 / tmp99;
        sum47 = cnt79 - v81;
        tmp99 = b25 + v81;
        cnt79 = sum47 & cnt79;
        b25 = sum47 + cnt79;
    }
}
int main() { test_func(); return 0; }

