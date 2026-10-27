int test_func(void) {
    int v0 = 60;
    int v1 = 62;
    int v2 = 18;
    int i;
    v1 = 10;
    for (i = 0; i < 5; i++) {
        v1 = v1 + v0;
    }
    v0 = v0 + v0;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
