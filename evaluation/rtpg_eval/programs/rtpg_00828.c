int test_func(void) {
    int v0 = 72;
    int v1 = 70;
    int v2 = 12;
    int i;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v2;
    }
    if (v0 > v2) { v0 = v2; }
    return v0;
}
int main(void) { return test_func(); }
