int test_func(void) {
    int v0 = 15;
    int v1 = 15;
    int v2 = 56;
    int v3 = 13;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v1;
    }
    if (v2 > v3) { v2 = v3; }
    return v0;
}
int main(void) { return test_func(); }
