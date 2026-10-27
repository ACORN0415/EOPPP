// RTPG_5917: vars=4 stmts=2
void test_func(void) {
    int v81 = 32;
    int v12 = 37898;
    int b9 = 51691;
    int val20 = 55336;
    int *ptr = &b9;
    int i;
    for (i = 0; i < 72; i++) {
        v81 = v12 - 72;
        v81 = val20;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

