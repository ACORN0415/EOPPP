int test_func(void) {
    int v0 = 73;
    int v1 = 1;
    int v2 = 57;
    int v3 = 28;
    int v4 = 17;
    int i;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
