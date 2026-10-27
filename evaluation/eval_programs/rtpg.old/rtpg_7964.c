// RTPG_7964: vars=4 stmts=4
void test_func(void) {
    int cur74 = 16524;
    int acc61 = 30764;
    int cnt89 = 11;
    int y20 = 7;
    int *ptr = &cnt89;
    int i;
    for (i = 0; i < 21; i++) {
        acc61 = acc61 - cur74;
        cur74 = cnt89 + 50;
        acc61 = cur74 + 9;
        cnt89 = y20;
        *ptr = *ptr + 5;
        if (acc61 < -10) {
        y20 = y20 + cur74;
        }
    }
}
int main() { test_func(); return 0; }

