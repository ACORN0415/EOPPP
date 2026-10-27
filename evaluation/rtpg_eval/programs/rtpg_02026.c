int test_func(void) {
    int v0 = 27;
    int v1 = 15;
    int v2 = 12;
    int i;
    if (v2 > v1) { v2 = v1; }
    for (i = 0; i < 7; i++) {
        v1 = v1 + v2;
    }
    v1 = v1 * 7;
    v2 = 11;
    return v0;
}
int main(void) { return test_func(); }
