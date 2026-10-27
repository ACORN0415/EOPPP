// RTPG_9296: vars=3 stmts=5
void test_func(void) {
    int acc96 = 80;
    int sum95 = 6;
    int hi19 = 4;
    int h0 = 5;
    int sv0 = 0;
    int h1 = 49832;
    int sv1 = 0;
    int i;
    for (i = 0; i < 21; i++) {
        sum95 = acc96 * 3;
        acc96 = hi19 + acc96;
        hi19 = hi19;
        acc96 = acc96 + sum95;
        sum95 = acc96 - 42;
        if (acc96 == 54) {
        hi19 = acc96 + 82;
        }
    }
}
int main() { test_func(); return 0; }

