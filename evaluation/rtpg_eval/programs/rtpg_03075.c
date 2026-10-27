int test_func(void) {
    int v0 = 16;
    int v1 = 25;
    int v2 = 8;
    int v3 = 28;
    int i;
    v2 = v2 + v1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
