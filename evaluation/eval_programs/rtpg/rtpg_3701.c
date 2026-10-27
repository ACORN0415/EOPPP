// RTPG_3701: vars=8 stmts=11
void test_func(void) {
    int c16 = 9765;
    int cur83 = 44;
    int acc25 = 8;
    int x18 = 9;
    int c70 = -6;
    int v70 = 91;
    int hi35 = 30;
    int a71 = 59343;
    int *ptr = &v70;
    int i;
    for (i = 0; i < 43; i++) {
        c16 = c70;
        x18 = x18 + 1;
        c16 = hi35 + 18146;
        v70 = v70 - 3;
        c70 = x18 + acc25;
        hi35 = x18 + c70;
        v70 = x18;
        c16 = x18 - c70;
        cur83 = acc25 - a71;
        c16 = cur83 + hi35;
        hi35 = acc25 + c16;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

