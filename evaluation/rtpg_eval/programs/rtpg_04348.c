int test_func(void) {
    int v0 = 85;
    int v1 = 55;
    int v2 = 85;
    int v3 = 99;
    int v4 = 7;
    int i;
    v4 = 50;
    v0 = v0 + v4;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
