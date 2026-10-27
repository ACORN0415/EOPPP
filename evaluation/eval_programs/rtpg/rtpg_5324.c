// RTPG_5324: vars=4 stmts=9
void test_func(void) {
    int c81 = 44844;
    int cnt39 = 3;
    int cnt20 = 7;
    int acc65 = -23;
    int i;
    for (i = 0; i < 39; i++) {
        c81 = c81 + cnt20;
        cnt39 = cnt20;
        c81 = cnt20 + -2;
        c81 = cnt20 - 6;
        cnt20 = cnt20 + 3;
        cnt39 = c81 - cnt39;
        acc65 = c81 + 46050;
        cnt39 = c81 - cnt20;
        cnt39 = cnt39 - 5;
        if (cnt39 >= 51) {
        cnt39 = cnt20 - cnt39;
        }
    }
}
int main() { test_func(); return 0; }

