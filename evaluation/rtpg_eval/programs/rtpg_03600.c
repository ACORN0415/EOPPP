int test_func(void) {
    int v0 = 98;
    int v1 = 58;
    int v2 = 18;
    int i;
    if (v2 > v0) { v2 = v0; }
    for (i = 0; i < 19; i++) {
        v0 = v0 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
