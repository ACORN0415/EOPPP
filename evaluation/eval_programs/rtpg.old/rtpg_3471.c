// RTPG_3471: vars=7 stmts=5
void test_func(void) {
    int cnt19 = 100;
    int acc85 = 40;
    int a9 = 33;
    int acc65 = 58;
    int tmp19 = 10;
    int sum54 = 10;
    int lo60 = 3;
    int i;
    for (i = 0; i < 23; i++) {
        tmp19 = cnt19 + tmp19;
        tmp19 = a9 + tmp19;
        sum54 = acc65 + acc85;
        sum54 = cnt19 + acc65;
        lo60 = acc65;
        if (sum54 < 14) {
        cnt19 = sum54 + acc85;
        }
    }
}
int main() { test_func(); return 0; }

