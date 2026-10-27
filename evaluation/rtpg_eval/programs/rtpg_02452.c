int test_func(void) {
    int v0 = 79;
    int v1 = 17;
    int v2 = 53;
    int v3 = 57;
    int v4 = 90;
    int v5 = 62;
    int i;
    for (i = 0; i < 18; i++) {
        v4 = v4 + v5;
    }
    v1 = v1 + v5;
    return v0;
}
int main(void) { return test_func(); }
