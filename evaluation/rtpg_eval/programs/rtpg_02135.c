int test_func(void) {
    int v0 = 72;
    int v1 = 49;
    int v2 = 27;
    int i;
    if (v0 > v1) { v0 = v1; }
    for (i = 0; i < 7; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
