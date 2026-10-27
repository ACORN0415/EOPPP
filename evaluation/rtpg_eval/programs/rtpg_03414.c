int test_func(void) {
    int v0 = 22;
    int v1 = 7;
    int v2 = 32;
    int v3 = 73;
    int i;
    v0 = v0 - v1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
