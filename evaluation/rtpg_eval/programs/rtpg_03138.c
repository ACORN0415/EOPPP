int test_func(void) {
    int v0 = 34;
    int v1 = 53;
    int v2 = 47;
    int i;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v0;
    }
    if (v2 > v2) { v2 = v2; }
    return v0;
}
int main(void) { return test_func(); }
