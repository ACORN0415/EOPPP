int test_func(void) {
    int v0 = 72;
    int v1 = 13;
    int v2 = 92;
    int v3 = 25;
    int i;
    v1 = v1 + v0;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
