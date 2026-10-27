// RTPG_8356: vars=3 stmts=6
void test_func(void) {
    int res79 = 65;
    int cur22 = -17;
    int cur52 = 21715;
    int i;
    for (i = 0; i < 96; i++) {
        cur22 = cur22 - res79;
        res79 = cur52 & cur22;
        cur52 = cur52 / res79;
        res79 = cur52 | res79;
        cur52 = cur22 + res79;
        cur22 = cur52 - res79;
        if (cur22 == 30) {
        cur22 = res79 - 43;
        }
    }
}
int main() { test_func(); return 0; }

