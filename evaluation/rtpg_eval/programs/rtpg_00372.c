int test_func(void) {
    int v0 = 21;
    int v1 = 13;
    int v2 = 47;
    int i;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v1;
    }
    if (v0 > v2) { v0 = v2; }
    return v0;
}
int main(void) { return test_func(); }
