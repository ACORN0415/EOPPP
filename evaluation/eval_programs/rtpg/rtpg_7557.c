// RTPG_7557: vars=4 stmts=12
enum State { BLUE, ON, GREEN };
void test_func(void) {
    float dat62 = 48.29;
    int lo97 = 6;
    int hi76 = -17;
    float cnt89 = 67.87;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 74; i++) {
        dat62 = hi76 % lo97;
        lo97 = lo97;
        cnt89 = lo97 - hi76;
        dat62 = hi76 - 36683;
        cnt89 = dat62 + 3419;
        dat62 = dat62 - 10;
        lo97 = cnt89 / hi76;
        hi76 = hi76 - 2;
        cnt89 = cnt89 ^ hi76;
        cnt89 = cnt89 - 3;
        hi76 = lo97 | hi76;
        lo97 = hi76 - cnt89;
        if (hi76 > 38) {
        hi76 = hi76 + 3;
        }
    }
}
int main() { test_func(); return 0; }

