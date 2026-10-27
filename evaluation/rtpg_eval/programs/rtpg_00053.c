int test_func(void) {
    int v0 = 40;
    int v1 = 81;
    int v2 = 61;
    int v3 = 76;
    int v4 = 12;
    int i;
    for (i = 0; i < 20; i++) {
        v4 = v4 + v4;
    }
    v3 = v3 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
