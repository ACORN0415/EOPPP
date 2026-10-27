int test_func(void) {
    int v0 = 91;
    int v1 = 59;
    int v2 = 57;
    int i;
    v1 = v1 * 9;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v0;
    }
    if (v0 > v2) { v0 = v2; }
    v2 = v2 - v1;
    return v0;
}
int main(void) { return test_func(); }
