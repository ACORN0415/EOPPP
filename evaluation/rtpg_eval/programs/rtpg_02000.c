int test_func(void) {
    int v0 = 19;
    int v1 = 41;
    int v2 = 90;
    int v3 = 26;
    int i;
    if (v1 > v3) { v1 = v3; }
    for (i = 0; i < 20; i++) {
        v0 = v0 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
