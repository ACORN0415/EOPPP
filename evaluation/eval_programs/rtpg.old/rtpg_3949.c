// RTPG_3949: vars=3 stmts=4
void test_func(void) {
    int y14 = 18298;
    int cnt0 = 10;
    int b34 = 5;
    int i;
    for (i = 0; i < 33; i++) {
        y14 = y14 & b34;
        y14 = b34;
        b34 = y14 / cnt0;
        cnt0 = b34 + 49;
        if (b34 != 50) {
        cnt0 = cnt0;
        }
    }
}
int main() { test_func(); return 0; }

