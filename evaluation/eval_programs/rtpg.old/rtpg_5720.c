// RTPG_5720: vars=3 stmts=3
void test_func(void) {
    int c78 = 1;
    int prev78 = 97;
    int out18 = 58;
    int i;
    for (i = 0; i < 64; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        prev78 = prev78 - 3;
        out18 = out18 - c78;
        c78 = out18 - 67;
        }
    }
}
int main() { test_func(); return 0; }

