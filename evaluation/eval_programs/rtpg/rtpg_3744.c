// RTPG_3744: vars=4 stmts=6
void test_func(void) {
    int sum27 = -33;
    int sum53 = -24;
    int x90 = 8;
    int hi93 = 32;
    int i;
    for (i = 0; i < 11; i++) {
        sum27 = sum27 + 2;
        sum27 = sum53;
        hi93 = sum27 + sum53;
        x90 = x90 + sum53;
        hi93 = sum53 + sum27;
        sum53 = hi93 - sum27;
        if (hi93 > 16546) goto done;
    }
done:
    hi93 = 0;
}
int main() { test_func(); return 0; }

