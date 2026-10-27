// RTPG_1017: vars=6 stmts=8
enum State { GREEN, OFF, SLOW };
void test_func(void) {
    int v29 = 96;
    int cur66 = 34;
    int v55 = 5;
    int sum52 = 69;
    int a59 = 10845;
    int cur43 = 30;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 93; i++) {
        a59 = cur43 - v55;
        v55 = v55 - 3;
        a59 = a59 - v29;
        cur43 = v55;
        a59 = sum52 - 9;
        a59 = a59 + 1;
        sum52 = sum52 - 2;
        a59 = sum52;
    }
}
int main() { test_func(); return 0; }

