// RTPG_6038: vars=5 stmts=11
struct Point { int a; int b; };
void test_func(void) {
    float cur74 = 72.41;
    float c93 = 91.23;
    float a74 = 40.98;
    int tmp68 = 78;
    int val29 = -16;
    struct Point s; s.a = 10; s.b = 45295;
    int *ptr = &c93;
    int i;
    for (i = 0; i < 34; i++) {
        a74 = c93;
        c93 = tmp68 + a74;
        cur74 = a74 + 15;
        val29 = val29 + 5;
        a74 = c93;
        tmp68 = val29 + val29;
        a74 = a74 + cur74;
        tmp68 = cur74 + tmp68;
        tmp68 = tmp68 + 2;
        a74 = a74 + 2;
        c93 = val29;
        *ptr = *ptr + 3;
        s.a = s.a + s.b;
        if (a74 < -2) {
        tmp68 = val29 + 23;
        }
    }
}
int main() { test_func(); return 0; }

