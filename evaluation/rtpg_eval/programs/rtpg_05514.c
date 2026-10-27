int test_func(void) {
    int v0 = 23;
    int v1 = 62;
    int v2 = 3;
    int i;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v1;
    }
    v1 = v1 - v2;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
