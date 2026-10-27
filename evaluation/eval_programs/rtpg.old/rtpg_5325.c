// RTPG_5325: vars=3 stmts=4
void test_func(void) {
    float prev17 = 44.22;
    int out67 = 9;
    int cur32 = 7;
    int *ptr = &cur32;
    int i;
    for (i = 0; i < 5; i++) {
        prev17 = cur32 - prev17;
        prev17 = prev17 - 15;
        prev17 = prev17 - cur32;
        cur32 = prev17 - 8;
        *ptr = *ptr + 3;
        if (prev17 < 71) {
        prev17 = cur32 + 28;
        }
    }
}
int main() { test_func(); return 0; }

