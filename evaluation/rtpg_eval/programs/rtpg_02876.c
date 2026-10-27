int test_func(void) {
    int v0 = 14;
    int v1 = 10;
    int v2 = 7;
    int i;
    if (v2 > v1) { v2 = v1; }
    v2 = 18;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
