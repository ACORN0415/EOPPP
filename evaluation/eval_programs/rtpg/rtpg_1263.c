// RTPG_1263: vars=7 stmts=5
void test_func(void) {
    int y91 = 42582;
    int out18 = 3642;
    int val23 = 7;
    int hi67 = 61555;
    int y78 = 48;
    int x40 = 80;
    int out71 = 18;
    int *ptr = &out18;
    int i;
    for (i = 0; i < 54; i++) {
        y91 = y78 + y78;
        out18 = x40;
        hi67 = out71 + y78;
        out18 = out71;
        x40 = out18;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

