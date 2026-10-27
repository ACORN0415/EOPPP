int test_func(void) {
    int v0 = 18;
    int v1 = 19;
    int v2 = 52;
    int v3 = 98;
    int i;
    v1 = 15;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
