int test_func(void) {
    int v0 = 14;
    int v1 = 76;
    int v2 = 53;
    int v3 = 79;
    int i;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
