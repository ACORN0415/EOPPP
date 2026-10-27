int test_func(void) {
    int v0 = 96;
    int v1 = 27;
    int v2 = 86;
    int i;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v2;
    }
    v0 = 9;
    if (v2 > v0) { v2 = v0; }
    return v0;
}
int main(void) { return test_func(); }
