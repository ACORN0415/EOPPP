// RTPG_7362: vars=4 stmts=2
void test_func(void) {
    int v8 = 50;
    int acc54 = 593;
    int prev67 = 0;
    int dat71 = 15;
    int i;
    for (i = 0; i < 26; i++) {
        acc54 = v8 + prev67;
        acc54 = acc54 + 4;
    }
}
int main() { test_func(); return 0; }

