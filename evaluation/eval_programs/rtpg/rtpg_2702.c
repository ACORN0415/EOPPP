// RTPG_2702: vars=3 stmts=12
void test_func(void) {
    int c39 = 15673;
    int v48 = 22;
    int y20 = 13572;
    int i;
    for (i = 0; i < 45; i++) {
        y20 = c39;
        c39 = c39 + 2;
        c39 = v48 - y20;
        v48 = c39 + v48;
        c39 = v48 ^ c39;
        c39 = c39 + 1;
        v48 = c39 + v48;
        y20 = c39 + y20;
        y20 = c39 - y20;
        y20 = c39;
        v48 = y20 & c39;
        v48 = v48 + c39;
        if (c39 >= 84) {
        v48 = v48 + 2;
        }
    }
}
int main() { test_func(); return 0; }

