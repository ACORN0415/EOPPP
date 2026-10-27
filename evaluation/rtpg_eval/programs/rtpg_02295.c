int test_func(void) {
    int v0 = 94;
    int v1 = 8;
    int v2 = 15;
    int i;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v2;
    }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
