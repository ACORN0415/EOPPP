int test_func(void) {
    int v0 = 43;
    int v1 = 91;
    int v2 = 61;
    int v3 = 1;
    int v4 = 36;
    int i;
    v4 = 5;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
