// RTPG_9535: vars=3 stmts=5
void test_func(void) {
    int c81 = 42;
    int prev88 = 13;
    int cnt99 = -39;
    int i;
    for (i = 0; i < 18; i++) {
        cnt99 = cnt99 + 4;
        prev88 = prev88 - cnt99;
        prev88 = prev88;
        prev88 = cnt99;
        prev88 = prev88 - 20305;
        if (c81 == -4) {
        cnt99 = cnt99 - 5;
        }
    }
}
int main() { test_func(); return 0; }

