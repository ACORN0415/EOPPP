// RTPG_5799: vars=3 stmts=3
void test_func(void) {
    int acc75 = 4;
    int out1 = 8;
    int hi14 = -39;
    int i;
    for (i = 0; i < 43; i++) {
        out1 = out1 - 2;
        out1 = out1;
        acc75 = acc75 + 1;
    }
}
int main() { test_func(); return 0; }

