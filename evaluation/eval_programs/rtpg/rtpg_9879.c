// RTPG_9879: vars=4 stmts=3
enum State { SLOW, GREEN, FAST };
void test_func(void) {
    int x89 = 58;
    int sum76 = 50;
    int sum32 = 3;
    int acc68 = 48;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 97; i++) {
        acc68 = sum76 / acc68;
        sum76 = sum32 - sum76;
        sum76 = x89;
    }
}
int main() { test_func(); return 0; }

