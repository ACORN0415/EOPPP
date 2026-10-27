int test_func(void) {
    int v0 = 13;
    int v1 = 66;
    int v2 = 94;
    int i;
    if (v1 > v1) { v1 = v1; }
    for (i = 0; i < 20; i++) {
        v1 = v1 + v0;
    }
    v0 = v0 % (v2 + 1);
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
