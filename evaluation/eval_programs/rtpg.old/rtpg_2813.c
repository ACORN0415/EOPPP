// RTPG_2813: vars=4 stmts=6
enum State { GREEN, BLUE, SLOW };
void test_func(void) {
    int sum15 = 5;
    int cur59 = 10163;
    int a56 = 4304;
    int lo78 = 9089;
    enum State st = GREEN;
    int h0 = 12;
    int sv0 = 0;
    int h1 = 50567;
    int sv1 = 0;
    int i;
    for (i = 0; i < 94; i++) {
        lo78 = sum15 + a56;
        a56 = lo78 + a56;
        sum15 = lo78 - cur59;
        lo78 = lo78 - 1;
        a56 = lo78 * 63944;
        lo78 = lo78 - 3;
        if (cur59 < 90) {
        sum15 = a56 - sum15;
        }
    }
}
int main() { test_func(); return 0; }

