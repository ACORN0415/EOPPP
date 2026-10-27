// RTPG_2440: vars=5 stmts=11
enum State { SLOW, FAST, GREEN };
void test_func(void) {
    int b25 = 71;
    int cnt48 = 11726;
    int tmp46 = 45343;
    int prev42 = 1;
    int acc35 = 46;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 56; i++) {
        b25 = b25 + 3;
        prev42 = tmp46 + b25;
        b25 = acc35;
        tmp46 = prev42 - 17;
        cnt48 = prev42;
        acc35 = acc35 - 5;
        acc35 = tmp46 + 13;
        prev42 = b25 - 65;
        b25 = b25 - 2;
        cnt48 = prev42;
        cnt48 = cnt48 + 58274;
    }
}
int main() { test_func(); return 0; }

