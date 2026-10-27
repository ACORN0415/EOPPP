int test_func(void) {
    int v0 = 16;
    int v1 = 61;
    int v2 = 19;
    int v3 = 20;
    int i;
    if (v2 > v3) { v2 = v3; }
    for (i = 0; i < 7; i++) {
        v0 = v0 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
