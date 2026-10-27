int test_func(void) {
    int v0 = 57;
    int v1 = 5;
    int v2 = 62;
    int i;
    v2 = v2 - v0;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
