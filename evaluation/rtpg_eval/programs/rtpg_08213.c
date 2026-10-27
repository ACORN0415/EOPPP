int test_func(void) {
    int v0 = 34;
    int v1 = 12;
    int v2 = 83;
    int v3 = 77;
    int v4 = 9;
    int i;
    for (i = 0; i < 7; i++) {
        v4 = v4 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
