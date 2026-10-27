// RTPG_7391: vars=3 stmts=2
void test_func(void) {
    double v81 = 30.19;
    int prev11 = 8;
    float a74 = 86.36;
    int i;
    for (i = 0; i < 55; i++) {
        v81 = a74 + v81;
        v81 = v81 + a74;
    }
}
int main() { test_func(); return 0; }

