// RTPG_7637: vars=4 stmts=4
void test_func(void) {
    int tmp19 = 4;
    int a85 = 60690;
    int c94 = -36;
    int dat22 = 48;
    int i;
    for (i = 0; i < 87; i++) {
        dat22 = a85 + c94;
        a85 = dat22 - c94;
        c94 = c94 + 2;
        c94 = dat22 - tmp19;
    }
}
int main() { test_func(); return 0; }

