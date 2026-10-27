int test_func(void) {
    int v0 = 1;
    int v1 = 40;
    int v2 = 94;
    int i;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v1;
    }
    if (v1 > v2) { v1 = v2; }
    v1 = v1 + v0;
    return v0;
}
int main(void) { return test_func(); }
