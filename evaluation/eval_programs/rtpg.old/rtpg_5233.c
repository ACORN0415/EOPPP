// RTPG_5233: vars=7 stmts=6
enum State { ON, FAST, BLUE };
void test_func(void) {
    int y51 = 47;
    int y23 = 7;
    int prev0 = 25;
    int tmp37 = 62497;
    int x14 = 29;
    int c77 = 4154;
    int acc48 = 2;
    enum State st = ON;
    int i;
    for (i = 0; i < 23; i++) {
        tmp37 = y23 - y51;
        c77 = c77 - tmp37;
        acc48 = acc48 - 5;
        x14 = tmp37;
        y23 = c77 + y51;
        tmp37 = prev0 - prev0;
    }
}
int main() { test_func(); return 0; }

