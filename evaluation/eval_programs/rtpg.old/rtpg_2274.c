// RTPG_2274: vars=4 stmts=12
void test_func(void) {
    int y11 = -32;
    int cnt19 = 42;
    int b70 = 4;
    int cur32 = 31;
    int i;
    for (i = 0; i < 68; i++) {
        cur32 = y11 - 33;
        cnt19 = cur32 + cnt19;
        y11 = y11;
        cur32 = b70;
        cnt19 = y11 - 0;
        cnt19 = cur32 + y11;
        b70 = y11 + cur32;
        cnt19 = y11;
        cur32 = b70 - y11;
        cur32 = cnt19 - 8;
        b70 = b70;
        cnt19 = b70 + 30853;
    }
}
int main() { test_func(); return 0; }

