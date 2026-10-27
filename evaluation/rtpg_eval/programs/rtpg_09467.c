int test_func(void) {
    int v0 = 7;
    int v1 = 80;
    int v2 = 34;
    int i;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v2;
    }
    v0 = v0 + v1;
    if (v2 > v2) { v2 = v2; }
    v2 = v2 * 6;
    return v0;
}
int main(void) { return test_func(); }
