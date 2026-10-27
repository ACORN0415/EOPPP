// RTPG_8185: vars=11 stmts=8
enum State { GREEN, BLUE, ON };
void test_func(void) {
    int lo37 = 33;
    int dat57 = 37;
    int y14 = 15428;
    int b92 = 8;
    int a31 = 28;
    int acc14 = 46;
    int sum14 = 8;
    int z58 = 40894;
    int cur66 = 0;
    int cnt90 = 3;
    int prev77 = 25;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 48; i++) {
        a31 = b92 - a31;
        y14 = z58 - cur66;
        y14 = a31 & b92;
        cur66 = sum14;
        a31 = a31 + 3;
        y14 = z58 + a31;
        b92 = b92 + 4;
        lo37 = a31 / lo37;
    }
}
int main() { test_func(); return 0; }

