int test_func(void) {
    int v0 = 60;
    int v1 = 30;
    int v2 = 88;
    int i;
    for (i = 0; i < 16; i++) {
        v1 = v1 + v1;
    }
    if (v1 > v1) { v1 = v1; }
    return v0;
}
int main(void) { return test_func(); }
