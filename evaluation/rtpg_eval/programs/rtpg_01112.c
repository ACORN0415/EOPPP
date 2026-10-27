int test_func(void) {
    int v0 = 30;
    int v1 = 36;
    int v2 = 39;
    int v3 = 82;
    int v4 = 11;
    int i;
    for (i = 0; i < 16; i++) {
        v4 = v4 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
