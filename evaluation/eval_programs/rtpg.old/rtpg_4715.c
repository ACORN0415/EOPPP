// RTPG_4715: vars=3 stmts=7
void test_func(void) {
    int cnt97 = 5;
    int cur78 = 92;
    int cnt25 = 74;
    int i;
    for (i = 0; i < 21; i++) {
        cnt25 = cur78;
        cnt97 = cnt97;
        cnt25 = cur78;
        cnt97 = cnt25 + 94;
        cnt25 = cnt97 + 6;
        cnt97 = cur78 - cur78;
        cnt97 = cnt25 + 0;
    }
}
int main() { test_func(); return 0; }

