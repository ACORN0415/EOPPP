int test_func(void) {
    int v0 = 86;
    int v1 = 9;
    int v2 = 72;
    int v3 = 82;
    int i;
    v0 = v0 + v1;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
