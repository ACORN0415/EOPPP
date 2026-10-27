int test_func(void) {
    int v0 = 63;
    int v1 = 57;
    int v2 = 22;
    int i;
    v1 = v1 + v2;
    for (i = 0; i < 5; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
