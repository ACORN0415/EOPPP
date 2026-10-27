int test_func(void) {
    int v0 = 31;
    int v1 = 32;
    int v2 = 37;
    int v3 = 53;
    int v4 = 18;
    int i;
    if (v2 > v3) { v2 = v3; }
    for (i = 0; i < 8; i++) {
        v0 = v0 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
