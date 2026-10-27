// RTPG_5313: vars=5 stmts=8
void test_func(void) {
    int tmp98 = 63676;
    int sum85 = 16;
    int b29 = 27;
    int val94 = 49;
    int tmp3 = 16;
    int i;
    for (i = 0; i < 20; i++) {
        b29 = sum85 - 27;
        sum85 = tmp3 / val94;
        tmp3 = tmp3 - b29;
        tmp98 = b29 + tmp98;
        val94 = tmp3 - tmp98;
        b29 = tmp98 % sum85;
        val94 = sum85 + 5;
        val94 = tmp98 + 52;
    }
}
int main() { test_func(); return 0; }

