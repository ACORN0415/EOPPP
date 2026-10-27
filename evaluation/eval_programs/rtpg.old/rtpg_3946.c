// RTPG_3946: vars=3 stmts=7
void test_func(void) {
    int sum4 = 1;
    int sum53 = 2;
    int cur13 = 47407;
    int i;
    for (i = 0; i < 7; i++) {
        cur13 = sum4;
        sum4 = cur13 ^ cur13;
        sum4 = sum4 + cur13;
        sum53 = cur13;
        cur13 = sum4 - 6;
        sum53 = sum4 ^ cur13;
        sum4 = sum4 ^ sum4;
    }
}
int main() { test_func(); return 0; }

